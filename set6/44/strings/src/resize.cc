#include "../include/strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize == d_size)
        return;

    if (newSize < d_size)
    {
        // delete strings that fall out of range and null their slots
        for (size_t idx = newSize; idx != d_size; ++idx)
            delete d_str[idx];
        d_size = newSize;
        return;
    }

    reserve(newSize);
}
