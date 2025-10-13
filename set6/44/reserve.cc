#include "strings.ih"

void Strings::reserve(size_t nr)
{
    if (nr <= d_capacity)               // reserving smaller: do nothing
        return;

    // allocate a new pointer array of size n (no string construction here)
    string **tmp = rawPointers(nr);

    // copy existing pointers; strings themselves are untouched
    for (size_t idx = 0; idx != d_size; ++idx)
        tmp[idx] = d_str[idx];

    // free old pointer array and install the new one
    delete[] d_str;
    d_str = tmp;
    d_capacity = nr;
}