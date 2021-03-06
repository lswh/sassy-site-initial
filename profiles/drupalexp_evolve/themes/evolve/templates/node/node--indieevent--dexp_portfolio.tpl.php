<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node-dexp-portfolio clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
// We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);    
    //$original_image = file_create_url($node->field_portfolio_images['und'][0]['uri']);
    $lightboxrel = 'portfolio_'.$nid;
    $portfolio_images = field_get_items('node', $node, 'field_add_image');
    $first_image = '';
    if($portfolio_images){
      foreach($portfolio_images as $k => $portfolio_image){
        if($k == 0){
          $first_image = file_create_url($portfolio_image['uri']);
        }else{
          $image_path = file_create_url($portfolio_image['uri']);
          print '<a href="'.$image_path.'" rel="lightbox['.$lightboxrel.']" style="display:none">&nbsp;</a>';
        }
      }
    }
    ?>
    <div class="portfolio-image">
      <?php print render($content['field_add_image']); ?>
      <div class="mediaholder"></div>
      <div class="portfolio-image-zoom">
        <a href="<?php print $first_image;?>" rel="lightbox[<?php print $lightboxrel;?>]"><span class="fa fa-search"></span></a>
      </div>
    </div>
    <div class="item-description">
      <center><h5><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h5></center>
      <div class="description"><?php print render($content['field_event_date']); ?><?php print render($content['field_venue']); ?><?php print render($content['body']);?>
      
      </div>
    </div>
  </div>
</div> 