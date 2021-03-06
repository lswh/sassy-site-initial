(function($){
  Drupal.behaviors.dexp_portfolio = {
    attach: function(context,settings) {
      if(context.location == null){
        $.each(settings.dexp_portfolio, function(filter, view){
          var $grid = $('#'+view,context),$filter = $('#'+filter,context);
          var $newitems = $('#'+view,context).find('.node').not('.shuffle-item');
          $grid.shuffle({
            itemSelector: '.node',
            speed: 500
          });
          $grid.shuffle('appended',$newitems);
          $grid.shuffle('shuffle', 'all');
        });
      }
      $.each(settings.dexp_portfolio, function(filter, view){
        var $grid = $('#'+view,context),$filter = $('#'+filter,context);
        $grid.shuffle({
          itemSelector: '.node',
          speed: 500
        });
        $filter.find('a').click(function(){
          var $this = $(this), filter = $this.data('filter');
          if(filter == '*'){
            $grid.shuffle('shuffle', 'all');
          }else{
            $grid.shuffle('shuffle', function($el, shuffle) {
              // Only search elements in the current group
              if (shuffle.group !== 'all' && $.inArray(shuffle.group, $el.data('groups')) === -1) {
                return false;
              }
              return $el.hasClass(filter);
            });
          }
		  // modifier par rapport a l original -> permet l aspect bouton selection
		  if($(this).hasClass('active')) {
			  $(this).removeClass('active');
			}
			else {
			 $(this).addClass('active');
			}
          // fin
          
          return false;
        });
        $grid.shuffle('shuffle', 'all');
				$(window).load(function(){
					$grid.shuffle('update');
				});
      });
    }
  }
})(jQuery);