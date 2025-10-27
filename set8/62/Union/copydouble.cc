#include "union.ih"

void Data::copyDouble(Data const &src)
{
    if (src.u_double == 0)          // mirrors nullptr if source is null
    {
        u_double = 0;
        return;
    }
    double *buf = new double[10];
    for (size_t idx = 0; idx != 10; ++idx)        // copy
        buf[idx] = src.u_double[idx];
    u_double = buf;
}