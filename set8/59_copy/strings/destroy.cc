#include "strings.ih"

void Strings::destroy()
{
    delete[] d_str;                     // return old memory
    d_str = 0;
    d_size = 0;
}
