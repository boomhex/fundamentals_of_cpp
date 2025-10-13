#include "strings.ih"

Strings::POD Strings::release()
{
    POD ret{ d_size, d_str };       // initialize the POD for the caller

    destroy();
    d_size = 0;                     // reinitialize our data members
    d_capacity = 1;
    d_str = rawStrings(1);

    return ret;
}
