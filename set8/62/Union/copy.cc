#include "union.ih"

Data::Data(Data const &other, Type srcType)
{
    (this->*s_copy[srcType])(other);
}