#include "strings.ih"

void Strings::enlarge()
{
    resize(d_capacity * 2); // Double capacity
}