#include "FlipFilter.h"
#include <cstring>
#include <vector>

namespace ip {

    FlipFilter::FlipFilter(FlipDirection direction) : m_direction(direction) {
    }

    void FlipFilter::apply(ImageBuffer& image) {
        if (m_direction == FlipDirection::Vertical) {
            const int height = image.height();
            const int stride = image.rowStride();
            std::vector<std::uint8_t> temp(stride);

            for (int y = 0; y < height / 2; ++y) {
                int otherY = height - 1 - y;

                std::memcpy(temp.data(), image.rowPtr(y), stride);
                std::memcpy(image.rowPtr(y), image.rowPtr(otherY), stride);
                std::memcpy(image.rowPtr(otherY), temp.data(), stride);
            }
        }
        else {
            // Horizontal (ÁÂ¿ì ¹ÝÀü)
            const int width = image.width();
            std::uint8_t temp[3];

            for (int y = 0; y < image.height(); ++y) {
                std::uint8_t* row = image.rowPtr(y);

                for (int x = 0; x < width / 2; ++x) {
                    int otherX = width - 1 - x;

                    std::memcpy(temp, &row[x * 3], 3);
                    std::memcpy(&row[x * 3], &row[otherX * 3], 3);
                    std::memcpy(&row[otherX * 3], temp, 3);
                }
            }
        }
    }

} // namespace ip