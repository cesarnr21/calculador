#include "triangle_impl.h"

namespace calculador {

    triangle_impl::triangle_impl(float base_len, float height_len) {
        base = base_len;
        height = height_len;
    }

    float triangle_impl::calculate_area(float base, float height) {
        float area;
        area = base * height / 2;

        return area;
    }
}
