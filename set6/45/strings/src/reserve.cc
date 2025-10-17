#include "../include/strings.ih"

void Strings::reserve(size_t num)
{   
    string *newMemory = rawStrings(num);

    for (size_t idx = 0; idx != d_size; ++idx)  // Copy elements
        new (newMemory + idx) string{ d_str[idx] };

    destroy();          // Update data members
    d_capacity = num;
    d_str = newMemory;
}
