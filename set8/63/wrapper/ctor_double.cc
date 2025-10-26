#include "wrap.ih"

Wrap::Wrap(double const *tenDoubles)
:
    d_tag(Data::DOUBLE),
    d_mt(Data(Wrap::copy10(tenDoubles)))
{

}