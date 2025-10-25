#include "union.ih"

void Data::moveDouble(Data &src)
{
    u_double = src.u_double;
    src.u_double = 0;   // required to avoid double-delete
}