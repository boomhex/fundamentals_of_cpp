#include "strings.ih"

Strings &Strings::operator=(Strings &&rhs)
{
    if (this != &rhs)
        swap(rhs);
    return *this;
}