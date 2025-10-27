#include "arg.ih"

size_t Arg::option(std::string *value, char const *longOption) const
{
    return d_longoption.size(value, longOption);
}
