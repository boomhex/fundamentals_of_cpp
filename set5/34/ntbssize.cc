#include "copycat.ih"

size_t CopyCat::ntbsSize(char const *nstb)
{
    size_t length = 0;
    while (*(nstb + length) !=  '\0')   // Search for termination char
        ++length;
    return length;
}