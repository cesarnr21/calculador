#ifndef INCLUDED_CIRCLE_IMPL_H
#define INCLUDED_CIRCLE_IMPL_H

#include <calculador/circle.h>

namespace calculador {

    class circle_ipml : public circle {
        private:
            float radius;
            float PI;

        public:
            circle_ipml(float radius);
            virtual float calculate_area(float radius);
            virtual float calculate_circunferece(float radius);
            virtual float get_value_pi();
            virtual double get_value_pi_double();

            float get_diameter() {
                float diameter = 2 * radius;

                return diameter;
            }
    };
}

#endif
