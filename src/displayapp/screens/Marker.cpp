#include "InfiniPaint.h"
#include <lvgl/lvgl.h>
#include "../DisplayApp.h"
#include "../LittleVgl.h"
#include <lvgl/src/lv_core/lv_obj.h>
#include "displayapp/icons/marker.c"

using namespace Pinetime::Applications::Screens;

Marker::Marker(Pinetime::Applications::DisplayApp* app) : Screen(app) {
    imgMarker = lv_img_create(lv_scr_act(), nullptr);
    lv_img_set_src_arr(imgMarker, &marker);
    lv_obj_align(imgMarker, nullptr, LV_ALIGN_IN_TOP_RIGHT, 0, 0);
}

Marker::~Marker() {
  lv_obj_clean(lv_scr_act());
}
