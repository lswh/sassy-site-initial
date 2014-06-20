<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>


<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>


<?php if($options['dexp_portfolio_filter']):?>
<?php if(isset($categories)):?>
<?php if($options['dexp_portfolio_filter_vocabulary'] == 4):?>
 
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

<div class="custompadding" data-padding="0">
<div id ="tline-content">
  <div class="tline-topdate"><?php print $title;?></div>
  <?php
  $count = 1;
  foreach ($rows as $id => $row):?>
    <article class="post tline-box <?php if ($count % 2 == 0) print 'rgtline';?>">
      <span class="<?php if ($count % 2 == 1) print 'tline-row-l'; else print 'tline-row-r';?>"></span>
      <?php print views_embed_view('blog_edited_hln', 'block_timeline', intval(strip_tags($row))); ?>
    </article>
  <?php $count++;endforeach;?>
</div>


<?php else: ?>

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

        <div class="btn btn-small">
          <a class="toggle-button glyphicon glyphicon-headphones" data-target=".div-1"> Music <span class="caret"></span> </a> 
        </div>
        <div class="btn btn-small">
          <a  class="toggle-button glyphicon glyphicon-fire" data-target=".div-2"> Event <span class="caret"></span> </a> 
        </div>
        <div class="btn btn-small">
          <a  class="toggle-button glyphicon glyphicon-map-marker" data-target=".div-3"> City <span class="caret"></span> </a> 
        </div>
        <div class="btn btn-small">
          <a  class="toggle-button glyphicon glyphicon-calendar" data-target=".div-4"> Date <span class="caret"></span> </a> 
        </div>
      </div>
      <!-- fin div contenant les boutons -->

      
      <!-- div contenant les listes d'option -->
      <div id="container">
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

        <div id="div-4" class="div-4 hide-div" style="display:none">
          <p><?php print views_embed_view('fullcalendarevent', 'block')?></p> 
          <li><a class="active" href="#" data-filter="*"><?php print t('Show All')?></a></li>
        </div>

      </div>
      <!-- fin div contenant les listes d'option -->
      
      
      
      
      
    </ul>

      <?php endif;?>
      <?php endif;?>
  </div>
  
<div id="<?php print $view_id;?>" class="dexp-grid-items row">
<?php foreach($rows as $row):?>
<?php print $row; ?>
<?php endforeach;?>
</div>
  
<?php endif;?>
<?php endif;?>  
<?php endif;?>  
<!--<div id="<?php //print $view_id;?>" class="dexp-grid-items row">
  <?php //foreach($rows as $row):?>
    <?php //print $row; ?>
  <?php //endforeach;?>
</div> --!>
