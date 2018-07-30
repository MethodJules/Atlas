(function($, Drupal)
{
    // Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
    Drupal.ajax.prototype.commands.network_aachen_callback = function(ajax, response, status)
    {
        // The value we passed in our Ajax callback function will be available inside the
        // response object. Since we defined it as selectedValue in our callback, it will be
        // available in response.selectedValue. Usually we would not use an alert() function
        // as we could use ajax_command_alert() to do it without having to define a custom
        // ajax command, but for the purpose of demonstration, we will use an alert() function
        // here:
        //alert(response.selectedValue);

        var selectedValue = response.selectedValue;

        if (selectedValue == 0) {
            $('#network_aachen_einleitung_div').css("display", "inline");
            $('#network_aachen_visualisierung_div').css("display", "none");
        } else {
            $('#network_aachen_einleitung_div').css("display", "none");
            $('#network_aachen_visualisierung_div').css("display", "inline");
        }


    };

    // Our function name is prototyped as part of the Drupal.ajax namespace, adding to the commands:
    Drupal.ajax.prototype.commands.network_aachen_callback_relationsart = function(ajax, response, status)
    {
        // The value we passed in our Ajax callback function will be available inside the
        // response object. Since we defined it as selectedValue in our callback, it will be
        // available in response.selectedValue. Usually we would not use an alert() function
        // as we could use ajax_command_alert() to do it without having to define a custom
        // ajax command, but for the purpose of demonstration, we will use an alert() function
        // here:
        alert(response.selectedValue_visualization);

        var selectedValue_visualization = response.selectedValue_visualization;



        if (selectedValue_visualization == 0) {
            alert('Bekanntheit gewählt');
        } else if (selectedValue_visualization == 1) {
            alert('Demo Asp gewählt');
            $('.node_aachen circle').css("fill", "black");
        } else {
            alert('Zielgruppe gewählt');
        }


    };


}(jQuery, Drupal));