#include "union.ih"


void Data::swapValueWord(Data &other)
{
    other.swapWordValue(*this);
}