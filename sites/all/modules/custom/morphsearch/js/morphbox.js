(function ($, Drupal) {

  Drupal.behaviors.morphsearch = {
    attach: function (context, settings) {
      var vid = $("input[name='vocabulary_vid']").val();

      // highlight and focus the column currently being edited on page load
      if (vid > 0) {
        var index = $("th[id=" + vid +"]").index() + 1;
        var elemCol = $('table tr td:nth-child(' + index + ')');
        $('table tr td:nth-child(' + index + '),th:nth-child(' + index + ')').toggleClass('highlight');
        $('table tr th:nth-child(' + index + ')')[1].scrollIntoView(false);
      }


      // go to the selected vocabulary edit page
      $('th').click(function() {

        // remove highlighting of the previously selected column
        if (vid > 0) {
          var prevIndex = $("th[id=" + vid +"]").index() + 1;
          $('table tr td:nth-child(' + prevIndex + '),th:nth-child(' + prevIndex + ')').toggleClass('highlight');
        }

        var index = $(this).index() + 1;
        var nid = $(this).attr('id');
        $('table tr td:nth-child(' + index + '),th:nth-child(' + index + ')').toggleClass('highlight');

        window.location.href = Drupal.settings.basePath + "config/morphbox/" + nid;
        return false;
      });
    }
  };



})(jQuery, Drupal);
