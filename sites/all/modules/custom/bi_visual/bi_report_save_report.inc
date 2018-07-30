<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 06.05.18
 * Time: 11:06
 */

function bi_report_save_report() {
    global $base_url;
    //save to a node

    $complaint_body = 'Your complaint body text';
    $node = new stdClass(); //Create a new node object
    $node->type = 'report'; //Content type
    $node->language = LANGUAGE_NONE;
    node_object_prepare($node); //Set default values

    $node->title = 'Report';


    $node->status = 1; //published
    $node->promote = 0; //not prompoted to the front page
    $node->sticky = 0; // not sticky at top of list
    $node->comment = 1; // comments closed

    //Add author of the node

    //get current user
    global $user;

    $node->uid = $user->uid;
    //Set create date
    $node->date = 'complaint_post_date';
    $node->created = strtotime('complaint_post_date');

    $path = 'content/' . $node->title;
    $node->path = array('alias' => $path);

    //add field
    $value = variable_get('report');
    $node->report[$node->language][0]['value'] = $value;
    $node->report[$node->language][0]['format'] = 'full_html';

    //save the node
    node_save($node);

    drupal_set_message('Node wurde gespeichert', 'status');
    $destination = variable_get('report_destination');
    //dsm($destination);
    drupal_goto($base_url . '/' . $destination['destination']);

    //dsm('Node saved.');
}




