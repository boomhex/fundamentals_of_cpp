#include "copycat.ih"

char **CopyCat::nstbArrCopy(char const **array, size_t const nElements)
{
    char **copy = new char*[nElements];     // Initialize array of char*

    for (size_t idx = 0; idx != nElements; ++idx)
    {
        copy[idx] = nstbCopy(*(array + idx), nstbSize(*(array + idx)));
    }

    copy[nElements] = 0;           // terminate like argv/environ

    return copy;
}
