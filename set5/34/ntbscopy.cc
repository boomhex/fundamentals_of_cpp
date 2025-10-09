#include "copycat.ih"

char *CopyCat::ntbsCopy(char const *ntbs, size_t length)
{
    char *copy = new char[length];  // Initialize new array of chars

    for (size_t charIdx = 0; charIdx != length; ++charIdx)
        copy[charIdx] = *(ntbs + charIdx);  // Copy all indeces

    return copy;
}
