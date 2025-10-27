#include "union.ih"

void Data::moveValue(Data &src)
{
    u_value = src.u_value;
}