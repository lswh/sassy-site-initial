<div id="page-wrapper">
      <header>
     
		  <div id="logo"> </div>
			<!-- logo-->
			<?php if ($logo): ?>
			<a href="<?php print $base_path; ?>" title="<?php print t('Click to return to the Homepage'); ?>" />
			<img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
			<?php endif; ?>
		  </div>


		   <?php print render($page['header']); ?>
	</header>

	
	<div id="404-message" class="row">
		<div class="span4">
			<img id="404_img" src="http://vps64542.ovh.net/vanille/profiles/drupalexp_evolve/themes/evolve/assets/images/denied.png" alt="...">
		</div>
		<div class="span4">
		<p>Sorry, the page you requested was not found. 
		It may be that the link you used is broken or that you have typed the address (URL) incorrectly. 
		You can return to the home page.') .</p>
		</div>
	</div>';

<?php
	//$theme = drupalexp_get_theme();
	//print $theme->pageRender();

?>
<!--page rendered by drupalexp drupal theme framework-->


    