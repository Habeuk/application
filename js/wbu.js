jQuery(document).ready(function($) {
  // display / hide form search
  $('.top_menu .main-search').hide();
  $('button').click(function (){
    $('.top_menu .main-search').show();
    $('.top_menu .main-search text').focus();
  }
  );
  $('.top_menu .close').click(function(){
    $('.top_menu .main-search').hide();
  });
  //static menu scroll
  //.sidebar-menu{overflow-y: scroll;    overflow-x: hidden;}
  function scrollMenu(){
    $contentHT = $('body').height();
    hauteur = $(window).height();
    if(hauteur < 800){
      $('body .sidebar-menu').addClass('scroll').css({'min-height':$contentHT+'px'});
    }else{$('body .sidebar-menu').removeClass('scroll').css({'min-height':'100px'});}
  }
  scrollMenu();
  $(window).resize(function() {
    scrollMenu();
  });
  //menu
  var toggle = true;
  $(".sidebar-icon").click(function() {                
    if (toggle)
    {
    $(".page-container").addClass("sidebar-collapsed").removeClass("sidebar-collapsed-back");
    $(".sidebar-menu .menupooledamin li a  span").css({"position":"absolute"});
    }
    else
    {
    $(".page-container").removeClass("sidebar-collapsed").addClass("sidebar-collapsed-back");
    setTimeout(function() {
      $(".sidebar-menu .menupooledamin li a  span").css({"position":"relative"});
    }, 400);
    }
          
          toggle = !toggle;
        });
    //admin-menu for mobile
     larg = $(window).width();
     console.log(larg);
     $(window).on('load', function() {
     
     //execute if class is present
     function checkVariable(){ 
        if ( $('#admin-menu-menu').length ){
            //console.log('#admin-menu-menu is present : '+$('#admin-menu-menu').length);
            console.log(larg);
            if(parseInt(larg) < 1140){
                // add burguer
                $('#admin-menu-menu').before('<i class="fas fa-align-justify burgeurAdmin"></i>');
                // hide menu by default
                $('#admin-menu-menu').css('display','none');
                // affichage du menu si on clique sur le burgeur
                $('#admin-menu-wrapper .burgeurAdmin').click(function(){
                    $('#admin-menu-menu').slideToggle();
                });
            }
        }
        else{
            //console.log('#admin-menu-menu not present');
            window.setTimeout(checkVariable,1000);
        }
     }
     checkVariable();
     });
});





















