#include "union.ih"

void (Data::*Data::s_swap[3][3])(Data &) =
{
    { &Data::swapDoubleDouble, &Data::swapDoubleWord,  &Data::swapDoubleValue },
    { &Data::swapWordDouble,   &Data::swapWordWord,    &Data::swapWordValue   },
    { &Data::swapValueDouble,  &Data::swapValueWord,   &Data::swapValueValue  }
};