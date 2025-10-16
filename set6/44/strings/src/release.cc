#include "../include/strings.ih"

Strings::POD Strings::release()
{
    POD ret{ d_size, d_capacity, d_str};       // initialize the POD for the caller

    d_size = 0;                     // reinitialize our data members
    d_capacity = 1;
    d_str = rawPointers(1);

    return ret;
}
