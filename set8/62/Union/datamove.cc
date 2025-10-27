#include "union.ih"

void (Data::*Data::s_move[3])(Data &) =
{
    &Data::moveDouble,
    &Data::moveWord,
    &Data::moveValue
};