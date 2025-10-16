#include "../include/strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
        enlarge();       // make room for the next string,

    d_str[d_size] = new string{ next };
    ++d_size;
}
