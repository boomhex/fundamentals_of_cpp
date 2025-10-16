#include "../include/strings.ih"

void Strings::fill(char **ntbs)
{
    // Assign contents into the first n strings
    for (size_t idx = 0; idx != d_size; ++idx){
        d_str[idx] = new string{ ntbs[idx] };
    }
}
