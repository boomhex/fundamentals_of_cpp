#include "wrap.ih"

double *Wrap::copy10(double const *src)
{
    double *ptr = new double[10];
    for (size_t idx = 0; idx != 10; ++idx)
        ptr[idx] = src[idx];
    return ptr;
}