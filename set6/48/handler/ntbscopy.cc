#include "handler.ih"

char *Handler::ntbsCopy(char const *ntbs)
{
    size_t ntbsSize;
    ntbsSize = 0;
    while(ntbs[ntbsSize])                           // Get ntbs size
        ++ntbsSize;

    char *copy = new char[ntbsSize];
    for (size_t idx = 0; idx != ntbsSize; ++idx)    // Copy chars
        copy[idx] = ntbs[idx];

    copy[ntbsSize] = '\0';
    return copy;
}