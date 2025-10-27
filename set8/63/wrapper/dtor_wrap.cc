#include "wrap.ih"

Wrap::~Wrap()
{
    d_mt.destroy(d_tag);
}