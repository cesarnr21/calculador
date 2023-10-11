#ifndef INCLUDED_RECTANGLE_IMPL_H
#define INCLUDED_RECTANGLE_IMPL_H

#include <calculador/rectangle.h>

namespace calculador {

    class rectangle_impl : public rectangle {
        private:
            float base;
            float height;
            float get_square;

        public:
            rectangle_impl(float base, float height);
            virtual float calculate_area(float base, float height);
            virtual float calculate_perimeter(float base, float height);
    };
}

#endif
