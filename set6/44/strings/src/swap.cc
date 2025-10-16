#include "../include/strings.ih"

void Strings::swap(Strings &other)
{
    // swap pointer array
    string **ptrs = d_str;
    d_str = other.d_str;
    other.d_str = ptrs;

    // swap size
    size_t sz = d_size;
    d_size = other.d_size;
    other.d_size = sz;

    // swap capacity
    size_t cap = d_capacity;
    d_capacity = other.d_capacity;
    other.d_capacity = cap;
}
