$(function() {
    $('li.dropdown').each(function( index, element ) {
        $(element).on("mouseenter", function() {
            $(element).find('.sub-menu').removeClass('hide');
        }).on("mouseleave", function() {
              $(element).find('.sub-menu').addClass('hide');
          });
    });
});