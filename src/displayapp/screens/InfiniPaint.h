#pragma once

#include <lvgl/lvgl.h>
#include <cstdint>
#include "Screen.h"
#include <components/motion/MotionController.h>

namespace Pinetime {
  namespace Components {
    class LittleVgl;
  }
  // namespace Controllers {
  //   class MotionController
  // }
  namespace Applications {
    namespace Screens {

      class InfiniPaint : public Screen {
      public:
        InfiniPaint(DisplayApp* app, Controllers::MotionController& motionController, Pinetime::Components::LittleVgl& lvgl);

        ~InfiniPaint() override;

        bool OnTouchEvent(TouchEvents event) override;

        bool OnTouchEvent(uint16_t x, uint16_t y) override;

      private:
        Controllers::MotionController& motionController;
        Pinetime::Components::LittleVgl& lvgl;

        static constexpr uint16_t width = 30;
        static constexpr uint16_t height = 10;
        static constexpr uint16_t bufferSize = width * height;

        lv_color_t b[bufferSize];
        
        lv_color_t selectColor = LV_COLOR_WHITE;
        uint8_t color = 2;
      };
    }
  }
}
