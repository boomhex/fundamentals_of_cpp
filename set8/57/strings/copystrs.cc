#include "strings.ih"

void Strings::copyStrs(string **const to)     const
{
    for (size_t idx = 0; idx != d_size; ++idx)
        to[idx] = d_str[idx];   // Assume function is used safely on higher
}                               // cap array since used internally
