#include "wrap.ih"

double const *Wrap::doubleptr() const
{
    return d_mt.asDouble();
}