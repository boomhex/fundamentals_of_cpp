#include "union.ih"

void Data::destroyDouble()
{
    delete[] u_double;
    u_double = 0;
}