# Calculador
**Purpose:** to practice OOP in C++ and develop Python bindings for testing:

* Create Classes with virtual and private contructors, explore the purposes for both
* Create Python bindings with `PyBind11` to make the classes and functions available to Python
* Learn to compile classes into a library using `CMake` and `make`
* Add docs, doxygen?

#### Questions
* what is the purpose of `virtual` in the function declarations
* purpose of `~class/function`

### Classes and Headers
* `include/`: should hold public API headers
* `lib/`: should hold private headers and class implemntations
* `bindings/` use to store c++ python bidings files


### Python Bindings

approaches:
* use `ctypes`
* use `pybind11` which supports c++ classes
* use `cython` which is a bit different, but those can be different files in other directories.

### Test
Use `pytest` and `unittest` for testing

- [ ] marshalling integers, very big `int` and `float` values, even the max values for them
- [ ] complex numbers between the two, might need to create a `struct` to hold the complex number in C
- [ ] strings
