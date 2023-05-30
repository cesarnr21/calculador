# Calculador
approaches:
* use `ctypes`
* use `pybind11` which supports c++ classes
* use `cython` which is a bit different, but those can be different files in other directories.

## Test
- [ ] marshalling integers, very big `int` and `float` values, even the max values for them
- [ ] complex numbers between the two, might need to create a `struct` to hold the complex number in C
- [ ] strings
