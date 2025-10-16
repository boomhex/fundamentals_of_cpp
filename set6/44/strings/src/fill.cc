#include "../include/strings.ih"

void Strings::fill(char **ntbs)
{
    reserve(d_size);     // capacity-only; cheap, copies pointers
    resize(d_size); 

    // Assign contents into the first n strings
    for (size_t idx = 0; idx != d_size; ++idx)
        *d_str[idx] = ntbs[idx];
}
