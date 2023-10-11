#include <pybind11/pybind11.h>

namespace py = pybind11;

#include <calculador/additions.h>

PYBIND11_MODULE(cal, handle) {
    handle.doc() = "The documentation for the module goes here";
    handle.def("add_intergers", &add_integers, "Adds two intergers");
    handle.def("add_two_nums:", &add_two_nums, "Add any two numbers (floats, int)")
}
