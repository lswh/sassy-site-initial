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


<div class="custompadding2" data-padding="0">
<div id ="tline-content">
  <div class="tline-topdate"><?php print $title;?></div>
  <?php
  dsm($rows);
  $count = 1;
  foreach ($rows as $id => $row):?>
    <div class="post tline-box dexp-grid-items row <?php if ($count % 2 == 0) print 'rgtline';?>">
      <span class="<?php if ($count % 2 == 1) print 'tline-row-l'; else print 'tline-row-r';?>"></span>
      <?php print views_embed_view('blog_edited_hln', 'block_timeline', intval(strip_tags($row))); ?>
    </div>
  <?php $count++;endforeach;?>
</div>


<?php else: ?>

 <!-- ajout script pour faire apparaitre et disparaitre la liste d'option en fonction du bouton -->
<script type="text/javascript">
		$(function() {
			$( '.toggle-button' ).on( 'click', function() {
				
				 $( '.hide-div' ).not( this.getAttribute( 'data-target' ) ).hide( 'slow' );	// cache les autres div
				 
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

				<div id="div-4" class="div-4 hide-div" style="display:none">

<!-- Begin open form from firebug -->
<center><form class="ctools-auto-submit-full-form ctools-auto-submit-processed jquery-once-2-processed" action="/vanille/all-events" method="get" id="views-exposed-form-portfolio-page" accept-charset="UTF-8"><div><div class="views-exposed-form">
  <div class="views-exposed-widgets clearfix">
          <div id="edit-field-event-date-value-wrapper" class="views-exposed-widget views-widget-filter-field_event_date_value">
                  <label for="edit-field-event-date-value">
            Select Date          </label>
                        <div class="views-widget">
          <div id="edit-field-event-date-value-value-wrapper"><div id="edit-field-event-date-value-value"><div class="container-inline-date"><div class="form-item form-type-date-popup form-item-field-event-date-value-value">
  <div id="edit-field-event-date-value-value" class="date-padding"><div class="form-item form-type-textfield form-item-field-event-date-value-value-date">
  <label class="element-invisible" for="edit-field-event-date-value-value-datepicker-popup-0">Date </label>
 <input id="edit-field-event-date-value-value-datepicker-popup-0" name="field_event_date_value[value][date]" value="" size="20" maxlength="30" class="form-text ctools-auto-submit-processed hasDatepicker date-popup-init" type="text">
<div class="description"> E.g., Wednesday, June 18, 2014</div>
</div>
</div>
</div>
</div></div></div>        </div>
              </div>
                    <div class="views-exposed-widget views-submit-button">
      <input class="ctools-use-ajax ctools-auto-submit-click js-hide btn btn-primary form-submit" id="edit-submit-portfolio" name="" value="Apply" type="submit">    </div>
          <div class="views-exposed-widget views-reset-button">
        <input class="btn form-submit" id="edit-reset" name="op" value="Show all" type="submit">      </div>
      </div>
</div>
</div></form></center>
<!-- end open form from firebug -->
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