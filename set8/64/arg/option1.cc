#include "arg.ih"

size_t Arg::option(int opt) const
{
    return d_shortoption.size(opt);
}
