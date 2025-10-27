#include "union.ih"

void (Data::*Data::s_copy[3])(Data const &) =
{
    &Data::copyDouble,
    &Data::copyWord,
    &Data::copyValue
};