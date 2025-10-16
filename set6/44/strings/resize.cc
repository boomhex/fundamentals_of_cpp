#include "strings.ih"

void Strings::resize(size_t nr)
{
    if (nr == d_size)
        return;

    if (nr < d_size)
    {
        // delete strings that fall out of range and null their slots
        for (size_t idx = nr; idx != d_size; ++idx)
        {
            delete d_str[idx];
            d_str[idx] = nullptr;
        }
        d_size = nr;
        return;
    }
    reserve(nr);

    for (size_t idx = d_size; idx != nr; ++idx)
        d_str[idx] = new string();

    d_size = nr;
}