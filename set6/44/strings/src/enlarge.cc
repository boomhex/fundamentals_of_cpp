#include "../include/strings.ih"

void Strings::enlarge()
{
    size_t doubleCap = d_capacity * 2;         // capacity x2
    resize(doubleCap);
}
