<div class="dexp-animate" data-animate="fadeInDown">
<div class="post-img media">
  <div class='mediaholder'>
    <section class="date">
      <span class="day"><?php print date('d',$created); ?></span>
      <span class="month"><?php print date('M',$created); ?></span>
    </section>
    <?php print render($content['field_media']);?>
    <div class="mediahover"></div>
    <div class="portfolio-image-zoom">
    </div>
  </div>
</div>
<section class="post-content">
      <header class="meta">
     <ul>
      <li><a href="#"><?php print t('Posted by');?> <?php print theme('username', array('account' => $node)); ?></a></li>
      <li><?php print render($content['field_categories']);?></li>
      <li><a href="#"><?php print $comment_count;?> <?php print t('Comments');?></a></li>
     </ul>
     <h2><a href="<?php print $node_url; ?>">
     <?php print $title; ?></a></h2>
      </header>
  <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
      ?>
  <a class="button line-color" href="<?php print $node_url; ?>"><?php print t('Read More');?></a> 
</section>  
</div>