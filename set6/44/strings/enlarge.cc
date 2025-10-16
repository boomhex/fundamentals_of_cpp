#include "strings.ih"

string **Strings::enlarge()
{
    size_t newCap = d_capacity * 2;         // capacity x2

    string **ret = rawPointers(newCap);

    for (size_t idx = 0; idx != d_size; ++idx)
        ret[idx] = d_str[idx];

    d_capacity = newCap;
    return ret;
}
