#include "union.ih"

void Data::swapDoubleValue(Data &other)
{
    size_t tmp = other.u_value;
    other.u_double = u_double;
    u_value = tmp;
}