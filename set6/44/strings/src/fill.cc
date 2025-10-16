#include "../include/strings.ih"

void Strings::fill(char **ntbs)
{
    resize(d_size);

    // Assign contents into the first n strings
    for (size_t idx = 0; idx != d_size; ++idx)
        add(string{ *ntbs[idx] });
}
