#include <pybind11/pybind11.h>

namespace py = pybind11;

#include <calculador/circle.h>

PYBIND11_MODULE(cal, handle) {
    handle.doc() = "The documentation for the module goes here";
    handle.def("add_intergers", &add_integers, "Adds two intergers");
    handle.def("add_two_nums:", &add_two_nums, "Add any two numbers (floats, int)")
}


void bind_circle(py::module &m){
    using circle = ::calculador::circle::circle;

    py::class_<circle>

    circle.def("calculate_area", &calculate_area);

    circle.def("calculate_circunference", &calculate_circunference);

    circle.def("get_value_pi", &get_value_pi);

    circle.def("get_value_pi_double", &get_value_pi_double);
}
