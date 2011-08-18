<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php
 //dsm(strpos($fields['field_event_image']->raw, "img"));
?>

<?php 
  $image = (strpos($fields['field_event_image']->content, "<img")) ? $fields['field_event_image']->content : ''; 
  
?>

<div class="featured-event-item">
  <?php if(!empty($image)) { ?>
  <div class="image"><?php print $image; ?></div>
  <?php } ?>
  <div class="content <?php print (!empty($image)) ? 'content-image' : ''; ?>">
    <div class="title"><?php print $fields['title']->content; ?></div>
    <div class="date-location"><?php print $fields['field_event_date']->content; ?>&nbsp;|&nbsp;<?php print $fields['field_event_location']->content; ?></div>
    <div class="hp-teaser"><?php print $fields['field_event_hp_teaser']->content; ?></div>
    <div class="link"><?php print $fields['view_node']->content; ?></div>
  </div>
  <div class="cf">&nbsp;</div>
  
</div>
