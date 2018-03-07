(function ($, Drupal) {

  // make hypothesis fieldsets clickable and display results in side bar block
  var elemBlockSearchresults = $('#block-views-searchresults-block');
  $('fieldset.hypothesis').click(function(){

    // display results in the AJAX block view besides the hypothesis
    if (elemBlockSearchresults.length) {

      // get search parameters and execute the AJAX call
      $('#edit-keyword').val($(this).attr('data-search'));
      $('#edit-submit-searchresults').click();
    }
  });

  Drupal.behaviors.wizard = {
    attach: function (context, settings) {

      // display hypothesis results and adjust sidebar block size after AJAX update
      if (!elemBlockSearchresults.find('.view-empty').length) {
        elemBlockSearchresults.find('.block-content').css('height','100%');
        elemBlockSearchresults.show();
      }
    }
  };

})(jQuery, Drupal);
