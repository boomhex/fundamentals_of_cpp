#include "union.ih"

void Data::copyDouble(Data const &src)
{
    if (src.u_double == 0)
    {
        u_double = 0;
        return;
    }
    double *buf = new double[10];
    for (std::size_t i = 0; i != 10; ++i)
        buf[i] = src.u_double[i];
    u_double = buf;
}