#include "../include/strings.ih"

void Strings::reserve(size_t newCap)
{
    if (newCap <= d_capacity)               // reserving smaller: do nothing
        return;

    string **tmp = rawPointers(newCap); // create new ptr arr
    copyStrs(tmp);  // copy d_strs into new arr
    destroyArr();   // destroy old ptr arrs
    d_str = tmp;
    d_capacity = newCap;
}
