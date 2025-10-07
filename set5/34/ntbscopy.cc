#include "copycat.h"

char *CopyCat::ntbsCopy(char const *nstb, size_t length)
{
    char *copy = new char[length];  // Initialize new array of chars

    for (size_t charIdx = 0; charIdx != length; ++charIdx)
        copy[charIdx] = *(nstb + charIdx);  // Copy all indeces

    return copy;
}
