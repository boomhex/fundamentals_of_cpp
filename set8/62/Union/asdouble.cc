#include "union.ih"

double *Data::asDouble(Type /*type*/) const
{
    return const_cast<double *>(u_double);
}