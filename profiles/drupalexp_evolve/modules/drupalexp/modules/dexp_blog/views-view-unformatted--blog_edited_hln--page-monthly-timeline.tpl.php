<?php //if($options['unformatted_blog_filter']):?>
  <?php if(isset($categories)):?>
  <div class="unformatted-filters">
		<ul id="<?php print $filter_id;?>" class="unformatted-filter clearfix" data-option-key="filter">
			<li><a class="active" href="#" data-filter="*"><?php print t('Show All')?></a></li>
			<?php foreach($categories as $key => $c): ?>
				<li>
					<a href="#" data-filter="<?php echo $key; ?>"><?php echo $c; ?></a>
				</li>
			<?php endforeach; ?>
		</ul>
	</div>
  <?php endif;?>
//<?php //endif;?>
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

