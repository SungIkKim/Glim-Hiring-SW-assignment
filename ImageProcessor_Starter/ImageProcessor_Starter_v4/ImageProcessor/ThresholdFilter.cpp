#include "ThresholdFilter.h"

namespace ip {

    ThresholdFilter::ThresholdFilter(int threshold) : m_threshold(threshold) {
    }

    void ThresholdFilter::apply(ImageBuffer& image) {
        for (int y = 0; y < image.height(); ++y) {
            std::uint8_t* row = image.rowPtr(y);
            for (int x = 0; x < image.width(); ++x) {
                std::uint8_t& b = row[x * 3 + 0];
                std::uint8_t& g = row[x * 3 + 1];
                std::uint8_t& r = row[x * 3 + 2];

                int gray = 0.114 * b + 0.587 * g + 0.299 * r;  // ºóÄ­ 1: Grayscale ¶§ ½è´ø °ø½Ä Àç»ç¿ë

                std::uint8_t result = (gray >= m_threshold) ? 255 : 0;  // ºóÄ­ 2, 3

                b = g = r = result;
            }
        }
    }

}// namespace ip
