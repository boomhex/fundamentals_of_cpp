#include "union.ih"

void Data::destroy(Type type)
{
    (this->*s_destroy[type])();
}