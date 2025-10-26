#include "union.ih"

double *Data::asDouble() const
{
    return const_cast<double *>(u_double);
}