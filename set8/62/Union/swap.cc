#include "union.ih"


void Data::swap(Data &other, Type thisType, Type otherType)
{
    (this->*s_swap[thisType][otherType])(other);
}