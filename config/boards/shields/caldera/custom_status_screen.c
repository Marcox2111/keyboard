#include <zmk/display/widgets/output_status.h>
#include <zmk/display/widgets/battery_status.h>
#include <zmk/display/status_screen.h>


static lv_obj_t *hello_world_label;

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen;

    screen = lv_obj_create(NULL, NULL);

    hello_world_label = lv_label_create(screen, NULL);
    lv_label_set_text(hello_world_label, "Hello, Caldera!");
    lv_obj_align(hello_world_label, NULL, LV_ALIGN_CENTER, 0, 0);

    return screen;
}