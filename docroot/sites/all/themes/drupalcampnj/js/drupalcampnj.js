(function ($) {
Drupal.behaviors.yourfunction = {
    attach: function(context) {
      $('body', context).once('accordionmenu', function () {
        $('body').bind('responsivelayout', function (e, d) {        
         
        //Define your drupal menu id (only works with core menu block)
          var menuid = ".site-name-slogan";        
         
        //This condition will act under the 'mobile' size, and will not be executed on ie6 and ie7
          if (d.to == 'mobile') {       
              
             //Add a span tag that will aft as the expand button, you can change the output of that button here
             $(menuid).prepend( $("<div id='over-wrapper'><a class='over' href='#'>Menu</a></div>") );     
             $("#zone-menu").hide();         
             //Create an open/close action on the accordion after clicking on the expand element         
             $('a.over').click(function (event) {     
                 event.preventDefault();
                 if ($("#zone-menu").is( ":visible" )){
                 $("#zone-menu").slideUp('fast');  
                 } else {           
                 $("#zone-menu").slideDown('fast');  
             }                      
            });             
          }
          
          if (d.to != 'mobile') {            
             //remove the expand elements from the accordion menu
             $("div#over-wrapper").remove();
             //show      
             $("#zone-menu").show();
          }                                        
     
        });
      });
    }
  }     
}(jQuery));