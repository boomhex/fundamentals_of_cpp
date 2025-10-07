#include "copycat.ih"

CopyCat::CopyCat(char **data)
{
    // Count number of nstb's
    auto ptr = data;
    while (*ptr)
        ++ptr;

    d_size =  ptr - data;
    d_data = new char*[d_size];
    d_data = ntbsArrCopy(data, d_size);
}
