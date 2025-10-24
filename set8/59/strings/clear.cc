#include "strings.ih"

void Strings::clear()
{
    destroy();
    d_size = 0;
    d_str = 0;
}
