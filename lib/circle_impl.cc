#include "circle_impl.h"

namespace calculador {

    circle_ipml::circle_ipml(float radius_len) {
        radius = radius_len;
    }

    float circle_impl::calculate_area() {
        float area = pow(radius, 2) * PI;

        return area;
    }

    float circle_impl::calculate_circunference() {
        float circunference = get_diamter() * PI;

        return circunference;
    }

    float circle_impl::get_value_pi() {
        float value = PI;

        return value;
    }

    float circle_impl::calculate_area() {
        double value = PI;

        return value;
    }

    float circle_impl::get_value_pi() {
        float value = PI;

        return value;
    }

    double circle_impl::get_value_pi_double() {
        double value = PI;

        return value;
    }

}
