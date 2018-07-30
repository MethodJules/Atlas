<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 23.06.18
 * Time: 19:32
 */

function xnavi_epub_get_nodes($nids) {
    //$nids = array(406);
    //dsm($nids);

    $nodes = node_load_multiple($nids);
    dsm($nodes);
    $html = '';
    foreach ($nodes as $node) {
        $node_view = node_view($node);
        //dsm(drupal_render($node_view));
        //dsm($node_view);
        $html .= drupal_render($node_view);



        //TODO render body field

        //TODO render fields
            //TODO get all fields of a node

    }


    return $html;

}