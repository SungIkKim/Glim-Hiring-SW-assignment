#pragma once
#include "ImageBuffer.h"

namespace ip {

    enum class FlipDirection {
        Vertical,   // »óÇÏ
        Horizontal  // ÁÂ¿ì
    };

    class FlipFilter {
    public:
        explicit FlipFilter(FlipDirection direction);
        void apply(ImageBuffer& image);

    private:
        FlipDirection m_direction;
    };

} // namespace ip