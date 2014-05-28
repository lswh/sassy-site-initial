<?php
dpm($form);
?>
    <div class="portfolio-image col-md-7">
      <p><?php print render($form['title']); ?></p>
      <p><?php print render($form['body']); ?></p>
      <p><?php  print render($form['field_add_image']); ?></p>
      <p><?php  print render($form['field_event_type']); ?></p>
      <p><?php  print render($form['field_map']); ?></p>
      <p><?php  print render($form['field_tags']); ?></p>
      <p><?php  print render($form['field_is_this_a_private_event_']); ?></p>
      <p><?php  print render($form['field_invitation']); ?></p>
    </div>
    <div class="portfolio-image col-md-5">
      <span class="brd-headling"></span>
      <div  class="clearfix"></div>
      <p><i class="fa fa-clock-o"></i><?php print render($form['field_event_date']); ?></p>
      <hr />
      <i class="fa fa-star"></i><p><?php print render($form['field_price']); ?></p>
      <hr />
      <p><i class="fa fa-glass"></i><?php print render($form['field_promotion']); ?></p>
      <hr />
      <p><i class="fa fa-music"></i><?php print render($form['field_music']); ?></p>
      <hr />
      <p><i class="fa fa-headphones"></i><?php print render($form['field_dj']); ?></p>
      <hr />
      <p><i class="fa fa-play-circle-o"></i><?php print render($form['field_event_organizer']); ?></p>
      <hr />
      <p><i class="fa fa-map-marker"></i><?php print render($form['field_venue']); ?></p>
      <hr />
      <span class="brd-headling"></span>
      <div class="clearfix"></div>      <?php print render($form['field_portfolio_categories']);?>
      <div class="clearfix"></div>
      <?php print render($form['field_portfolio_url']);?>
    </div>
    <div  class="clearfix"></div>


  </div>
</div> 