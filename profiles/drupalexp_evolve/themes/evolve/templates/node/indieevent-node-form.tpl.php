<?php
dpm($form);
?>
    <div class="portfolio-image col-md-6">
      <p><?php print render($form['title']); ?></p>
      <p><?php print render($form['body']); ?></p>

      <p><?php  print render($form['field_event_type']); ?></p>
      <p><?php  print render($form['field_tags']); ?></p>
      <p><?php  print render($form['field_is_this_a_private_event_']); ?></p>
      <p><?php  print render($form['field_invitation']); ?></p>
      <i class="fa fa-star"></i><p><?php print render($form['field_price']); ?></p>
      <hr />
  
      <p><i class="fa fa-glass"></i><?php print render($form['field_promotion']); ?></p>
      <hr />

    </div>
    <div class="portfolio-image col-md-6">
      <span class="brd-headling"></span>
      <div  class="clearfix"></div>
      <p><?php  print render($form['field_add_image']); ?></p>
      <p><hr/>
      <p><i class="fa fa-music"></i><?php print render($form['field_music']); ?></p>
      <hr />
	    <i class="fa fa-clock-o"></i><p><?php print render($form['field_event_date']); ?></p>
      <hr />
      <p><i class="fa fa-headphones"></i><?php print render($form['field_dj']); ?></p>
      <hr />
      <p><i class="fa fa-play-circle-o"></i><?php print render($form['field_event_organizer']); ?></p>
      <hr />
      <p><i class="fa fa-map-marker"></i><?php print render($form['field_venue']); ?></p>
      <p><?php print render($form['field_venue_name']); ?></p>
      <p><?php print render($form['field_new_venue_description']); ?></p>
      <p><?php print render($form['field_event_photos']); ?></p>
      <p><?php print render($form['field_video']); ?></p>
      <span class="brd-headling"></span>
      <div class="clearfix"></div>
    </div>
    <div  class="clearfix"></div>
    <div class="portfolio-image col-md-11">
    <center><p><?php  unset($form['field_map']); ?></p></center>
    <?php print drupal_render_children($form);?>
    </div>


  </div>
</div> 
