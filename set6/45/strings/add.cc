#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
        resize(d_capacity * 2);

    new (d_str + d_size) string(next);
    ++d_size;
}
