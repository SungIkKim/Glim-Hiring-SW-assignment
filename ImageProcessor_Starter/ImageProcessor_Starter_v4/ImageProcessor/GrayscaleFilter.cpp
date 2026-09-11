#include "GrayscaleFilter.h"

namespace ip {

    void GrayscaleFilter::apply(ImageBuffer& image) {
        for (int y = 0; y < image.height(); ++y) {
            std::uint8_t* row = image.rowPtr(y);
            for (int x = 0; x < image.width(); ++x) {
                std::uint8_t& b = row[x * 3 + 0];
                std::uint8_t& g = row[x * 3 + 1];
                std::uint8_t& r = row[x * 3 + 2];

                int gray = 0.114 * b + 0.587 * g + 0.299 * r;  // 여기에 밝기 공식 채우기

                b = g = r = static_cast<std::uint8_t>(gray);
            }
        }
    }

} // namespace ip