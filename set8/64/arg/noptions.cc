#include "arg.ih"

size_t Arg::nOptions()  const
{
    return d_shortoption.size() + d_longOnlyCount;
}
