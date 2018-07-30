<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 22.06.18
 * Time: 14:46
 */

function xnavi_epub_download ($form, &$form_state) {
    //dsm($form_state);
    module_load_include('inc', 'xnavi_epub', 'xnavi_epub.helper');
    $values = $form_state['values']['choose_epub_item'];
    $nids = array();
    foreach ($values as $value) {
        //dsm($value);
        if ($value > 0) {
            $nids[] = $value;
        }

    }
    //dsm($nids);
    $html  = xnavi_epub_get_nodes($nids);

    variable_set('xnavi_epub_html',$html);

    try {
        module_load_include('php', 'xnavi_epub', 'EPub');
    } catch (Exception $e) {
        watchdog_exception('type', $e);
    }

    $content_start =
        "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
        . "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\"\n"
        . "    \"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"
        . "<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"
        . "<head>"
        . "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n"
        . "<link rel=\"stylesheet\" type=\"text/css\" href=\"styles.css\" />\n"
        . "<title>InDeKo.Navi</title>\n"
        . "</head>\n"
        . "<body>\n";

    $bookEnd = "</body>\n</html>\n";

    $book = new EPub(); //no arguments gives the default epub2, lang=en and dir="ltr"

    // Title and Identifier are mandatory!
    $book->setTitle("InDekoNavi");
    $book->setIdentifier("http://test.de", EPub::IDENTIFIER_URI); // Could also be the ISBN number, prefered for published books, or a UUID.
    $book->setLanguage("en"); // Not needed, but included for the example, Language is mandatory, but EPub defaults to "en". Use RFC3066 Language codes, such as "en", "da", "fr" etc.
    $book->setDescription("Epub export von InDekoNavi");
    //$book->setAuthor("John Doe Johnson", "Johnson, John Doe");
    $book->setPublisher("InDekoNavi", "http://InDekoNavi.com/");
    $book->setDate(time());
    $book->setRights("Copyright and licence information specific for the book."); // As this is generated, this _could_ contain the name or licence information of the user who purchased the book, if needed. If this is used that way, the identifier must also be made unique for the book.
    //$book->setSourceURL("http://JohnJaneDoePublications.com/books/TestBookSimple.html");
//*****CSS**START*****
// A book need styling, in this case we use static text, but it could have been a file.
$cssData = variable_get('xnavi_epub_css');

;
//***CSS***END*****

    $book->addCSSFile("styles.css", "css1", $cssData);

    $cover = $content_start . "<h1>InDeKo.Navi EPUB Generator</h1>\n<h2>By: www.indeko-navi.de</h2>\n" . $bookEnd;

    $book->addChapter("Notices", "Cover.html", $cover);

    //$html = '<p>Hier kommen die Downloads</p>';

    $html = variable_get('xnavi_epub_html');

    $epub = $content_start . $html . $bookEnd;

    $book->addChapter("Test", 1, $epub);

    $book->finalize();

    $status = $book->sendBook('InDeKo_Test');
    if($status) {
        drupal_set_message('EPUB generiert', 'status');
        drupal_exit();
    } else {
        drupal_set_message('EPUB nicht generiert', 'error');
    }

}