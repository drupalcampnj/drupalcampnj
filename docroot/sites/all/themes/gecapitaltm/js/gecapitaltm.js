(function($){
  //events listing page: opening/closing details
  $(document).ready(function(){
    $('.view-events-listing .views-row .see-more a.open').click(function(){
      row = $(this).parents('.views-row');
      $(this).hide();
      row.find('.see-more a.close').show();
      row.find('.details').show('fast');
    });
    
    $('.view-events-listing .views-row .see-more a.close').click(function(){
      row = $(this).parents('.views-row');
      $(this).hide();
      row.find('.see-more a.open').show();
      row.find('.details').hide('fast');
    });
    
  });
  
})(jQuery);