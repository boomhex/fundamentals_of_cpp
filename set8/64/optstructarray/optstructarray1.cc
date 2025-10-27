#include "optstructarray.ih"

OptStructArray::OptStructArray(size_t size)
:
    d_n(size),
    d_opt(new OptStruct[size + 1]{})
{
    d_opt[size] = OptStruct{0, 0, 0, 0};       // last element filled with zeroes
}
