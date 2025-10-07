#include "copycat.ih"

char **CopyCat::ntbsArrCopy(char *const *array, size_t const nElements)
{
    char **copy = new char*[nElements];     // Initialize array of char*

    for (size_t idx = 0; idx != nElements; ++idx)
    {
        copy[idx] = ntbsCopy(*(array + idx), ntbsSize(*(array + idx)));
    }

    copy[nElements] = 0;           // terminate like argv/environ

    return copy;
}
