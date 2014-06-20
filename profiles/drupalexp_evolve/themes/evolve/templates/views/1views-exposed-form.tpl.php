<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>

 
  <div class="portfolio-filters">
    <ul id="<?php print $filter_id;?>" class="dexp-portfolio-filter clearfix" data-option-key="filter">
      <li><a class="active" href="#" data-filter="*"><?php print t('Show All')?></a></li>
      <?php foreach($categories as $key => $c): ?>
        <li>
          <a href="#" data-filter="<?php echo $key; ?>"><?php echo $c; ?></a>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>



 <!-- ajout script pour faire apparaitre et disparaitre la liste d'option en fonction du bouton -->
<script type="text/javascript">
    $(function() {
      $( '.toggle-button' ).on( 'click', function() {
        
         $( '.hide-div' ).not( this.getAttribute( 'data-target' ) ).hide( 'slow' ); // cache les autres div
         
        $( this.getAttribute( 'data-target' ) ).toggle( 'slow' );
      });
    });
</script>
<!-- fin script -->

<div class="portfolio-filters">
    <ul id="<?php print $filter_id;?>" class="dexp-portfolio-filter clearfix" data-option-key="filter">
    
      <!-- div contenant les boutons -->
      <div id="Menu-Button" class="btn-group"> 

        <div class="bouton btn btn-small">
          <a class="toggle-button glyphicon glyphicon-headphones" data-target=".div-1"> Music <span class="caret"></span> </a> 
        </div>
        <div class="bouton btn btn-small">
          <a  class="toggle-button glyphicon glyphicon-fire" data-target=".div-2"> Event <span class="caret"></span> </a> 
        </div>
        <div class="bouton btn btn-small">
          <a  class="toggle-button glyphicon glyphicon-map-marker" data-target=".div-3"> City <span class="caret"></span> </a> 
        </div>
        <div class="bouton btn btn-small">
          <a  class="toggle-button glyphicon glyphicon-calendar" data-target=".div-4"> Date <span class="caret"></span> </a>
        </div>
      </div>
      <!-- fin div contenant les boutons -->
      
      <!-- div contenant les listes d'option -->
      <div id="container" style="margin-top:5px;">
        <div id="div-2" class="div-2 hide-div" style="display:none">
          <li><a class="active" href="#" data-filter="*"><?php print t('Show All')?></a></li>
          <?php foreach($categories as $key => $c): ?>
            <li>
              <a href="#" data-filter="<?php echo $key; ?>"><?php echo $c; ?></a>
            </li>
          <?php endforeach; ?>
        </div>
        
        
        <?php if(isset($music)):?>
        <div id="div-1" class="div-1 hide-div" style="display:none">    
          <li><a class="active" href="#" data-filter="*"><?php print t('Show All')?></a></li>
          <?php foreach($music as $key => $c): ?>
            <li>
              <a href="#" data-filter="<?php echo $key; ?>"><?php echo $c; ?></a>
            </li>
          
          <?php endforeach; ?>
        </div>
        
        
        <?php if(isset($city)):?>
        <div id="div-3" class="div-3 hide-div" style="display:none">    
          <li><a class="active" href="#" data-filter="*"><?php print t('Show All')?></a></li>
          <?php foreach($city as $key => $c): ?>
            <li>
              <a href="#" data-filter="<?php echo $key; ?>"><?php echo $c; ?></a>
            </li>
          
          <?php endforeach; ?>
        </div>
      </div>
      <!-- fin div contenant les listes d'option -->    
    </ul>

      <?php endif;?>
      <?php endif;?>
  </div>




<div id="div-4" class="div-4 hide-div views-exposed-form" style="display:none">
  <div class="views-exposed-widgets clearfix">
    <?php foreach ($widgets as $id => $widget): ?>
      <div id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget views-widget-<?php print $id; ?>">
        <?php if (!empty($widget->label)): ?>
          <label for="<?php print $widget->id; ?>">
            <?php print $widget->label; ?>
          </label>
        <?php endif; ?>
        <?php if (!empty($widget->operator)): ?>
          <div class="views-operator">
            <?php print $widget->operator; ?>
          </div>
        <?php endif; ?>
        <div class="views-widget">
          <?php print $widget->widget; ?>
        </div>
        <?php if (!empty($widget->description)): ?>
          <div class="description">
            <?php print $widget->description; ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endforeach; ?>
    <?php if (!empty($sort_by)): ?>
      <div class="views-exposed-widget views-widget-sort-by">
        <?php print $sort_by; ?>
      </div>
      <div class="views-exposed-widget views-widget-sort-order">
        <?php print $sort_order; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($items_per_page)): ?>
      <div class="views-exposed-widget views-widget-per-page">
        <?php print $items_per_page; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($offset)): ?>
      <div class="views-exposed-widget views-widget-offset">
        <?php print $offset; ?>
      </div>
    <?php endif; ?>
    <div class="views-exposed-widget views-submit-button">
      <?php print $button; ?>
    </div>
    <?php if (!empty($reset_button)): ?>
      <div class="views-exposed-widget views-reset-button">
        <?php print $reset_button; ?>
      </div>
    <?php endif; ?>
  </div>
</div>

