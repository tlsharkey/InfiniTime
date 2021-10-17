#pragma once

#include <lvgl/lvgl.h>
#include <cstdint>
#include "Screen.h"

namespace Pinetime {
//   namespace Components {
//     class LittleVgl;
//   }
  // namespace Controllers {
  //   class MotionController
  // }
  namespace Applications {
    namespace Screens {

      class Marker : public Screen {
      public:
        Marker(DisplayApp* app);

        ~Marker() override;

      private:
        static constexpr uint16_t width = 240;
        static constexpr uint16_t height = 240;

        lv_obj_t* imgMarker;
      };
    }
  }
}
