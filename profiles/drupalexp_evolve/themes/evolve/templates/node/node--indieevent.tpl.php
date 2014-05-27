

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix row"<?php print $attributes; ?>>

  <div class="content<"<?php print $content_attributes; ?>>

    <?php

// We hide the comments and links now so that we can render them later.

    hide($content['comments']);

    hide($content['links']);

    dsm($content);    

    ?>

    <div class="portfolio-image col-md-7">

      <?php  print render($content['field_add_image']); ?>

        <div style="text-align:center;">

        <div onclick="jQuery('#popUp_loginNotice').show();" class=" btn btn-small btn-primary btn-block">

        I'm Attending

        </div>

        </div>

    </div>

    <div class="portfolio-image col-md-5">

      <span class="brd-headling"></span>

      <div class="clearfix"></div>

	    <p><i class="fa fa-clock-o"></i><?php print render($content['field_event_date']); ?></p>

      <p><?php print render($content['field_price']); ?></p>

      <p><?php print render($content['field_promotion']); ?></p>

      <p><?php print render($content['field_music']); ?></p>

      <p><?php print render($content['field_dj']); ?></p>

      <p><?php print render($content['field_event_organizer']); ?></p>

      <p><?php print render($content['field_venue']); ?></p>

     <p><?php print render($content['body']); ?></p>

      <span class="brd-headling"></span>

      <div class="clearfix"></div>

      <?php print render($content['field_portfolio_categories']);?>

      <div class="clearfix"></div>

      <?php print render($content['field_portfolio_url']);?>

    </div>

  </div>

</div> 

