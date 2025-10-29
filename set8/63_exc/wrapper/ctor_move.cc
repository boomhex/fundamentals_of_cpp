#include "wrap.ih"

Wrap::Wrap(Wrap &&other)
:
    d_tag(other.d_tag),
    d_mt(move(other.d_mt), other.d_tag)
{

}