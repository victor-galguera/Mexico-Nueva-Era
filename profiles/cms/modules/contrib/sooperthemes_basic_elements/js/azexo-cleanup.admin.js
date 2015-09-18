  $(document).ready(function() {
    $(document).on("azexo_restore", function(sender, data) {
      $(data.dom).find('.animated').removeClass('animated');
      });
  });
