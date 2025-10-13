#include "strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize == d_size)
        return;

    if (newSize < d_size)
    {
        // delete strings that fall out of range
        for (string *begin = d_str + newSize, *end = d_str + d_size;
                begin != end; ++begin)
        {
            begin->~string();
        }
        d_size = newSize;
        return;
    }

    reserve(newSize);
}