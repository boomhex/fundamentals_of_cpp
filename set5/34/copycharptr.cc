#include "copycat.h"

void CopyCat::copyCharPtr(size_t nElements, char *ptr, char *destination)
{
    for (char *begin = destination, *end = begin + nElements, *temp = ptr;
         begin != end;
         ++begin, ++temp)
    {
        *begin = *temp;
    }
}
