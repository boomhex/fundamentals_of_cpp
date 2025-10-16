#include "../include/strings.ih"

void **Strings::enlarge()
{
    size_t newCap = d_capacity * 2;         // capacity x2
    resize(newCap);
}
