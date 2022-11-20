jQuery(document).ready(function () {
    var mouseY = 0;
    var topValue = 0;
    window.addEventListener("mouseout", function (e) {
        mouseY = e.clientY;
        if (mouseY < topValue) {
            jQuery(".modal").addClass("show-modal");
        }
    },
        false);
    var modal = jQuery(".modal");
    var closeButton = jQuery(".close-button");
    function togglmodal() {
        jQuery(".modal").hide();
    }
    function windowOnClick(event) {
        if (jQuery(event.target).hasClass("modal")) {
            togglmodal();
        }
    }
    jQuery(".close-button").click(function () {
        togglmodal();
    });
    jQuery(window).on("click", windowOnClick);
});