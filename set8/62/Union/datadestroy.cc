#include "union.ih"

void (Data::*Data::s_destroy[3])() =
{
    &Data::destroyDouble,
    &Data::destroyWord,
    &Data::destroyValue
};