#include "union.ih"

Data::Data(Data &&other, Type srcType)
{
    (this->*s_move[srcType])(other);
}