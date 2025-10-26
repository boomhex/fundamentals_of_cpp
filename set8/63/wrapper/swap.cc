#include "wrap.ih"

void Wrap::swap(Wrap &other)
{
    d_mt.swap(other.d_mt, d_tag, other.d_tag);
    Data::Type tmp = d_tag;
    d_tag = other.d_tag;
    other.d_tag = tmp;
}