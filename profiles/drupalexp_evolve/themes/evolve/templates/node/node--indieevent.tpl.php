

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix row"<?php print $attributes; ?>>

  <div class="content<"<?php print $content_attributes; ?>>

    <?php

// We hide the comments and links now so that we can render them later.

    hide($content['comments']);

    hide($content['links']);

    dsm($content);    

    ?>
	

    <div class="portfolio-image col-md-3">

      <?php  print render($content['field_add_image']); ?>

        <div style="text-align:center;">

        <div onclick="jQuery('#popUp_loginNotice').show();" style="max-width:250px;margin-top:10px;" class=" btn btn-small btn-primary btn-block">

        I'm Attending

        </div>

        </div>

    </div>

    <div class="portfolio-image col-md-4">

      <span class="brd-headling">Details</span>
<hr />
      <p><i class="fa fa-clock-o"></i><p><?php print render($content['field_event_date']); ?></p>
      <hr />

      <i class="fa fa-star"></i><p><?php print render($content['field_price']); ?></p>
      <hr />

   

      <p><i class="fa fa-music"></i><?php print render($content['field_music']); ?></p>
      <hr />

      

      <p><i class="fa fa-map-marker"></i><?php print render($content['field_venue']); ?></p>
      <hr />

     </div>
	 
	 
	<div class="portfolio-image col-md-4">
		<span class="brd-headling">Persons</span>
<hr />
	  <p><i class="fa fa-headphones"></i><?php print render($content['field_dj']); ?></p>
      <hr />

      <p><i class="fa fa-play-circle-o"></i><?php print render($content['field_event_organizer']); ?></p>
      <hr />
	  
	  
	</div>
	
	
	<div class="portfolio-image col-md-11">
	<hr />
	  <p><i class="fa fa-glass"></i><?php print render($content['field_promotion']); ?></p>
      <hr />
	  
    <p><?php print render($content['body']); ?></p>
    </div>


</div> 

