#ifndef INCLUDED_TRIANGLE_IMPL_H
#define INCLUDED_TRIANGLE_IMPL_H

#include <calculador/triangle.h>

namespace calculador {

    class triangle_impl : public triangle {
        private:
            float base;
            float height;

        public:
            triangle_impl(float base, float height);
            float calculate_area(float base, float height);
    };
}

#endif
