#include "wrap.ih"

Wrap::Wrap(Wrap const &other)
:
    d_tag(other.d_tag),
    d_mt(other.d_mt, other.d_tag)
{

}