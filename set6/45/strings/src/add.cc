#include "../include/strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
        enlarge();

    new (d_str + d_size) string(next);
    ++d_size;
}
