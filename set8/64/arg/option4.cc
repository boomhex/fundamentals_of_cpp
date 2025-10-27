#include "arg.ih"

size_t Arg::option(std::string *value, char const *longOption) const
{
    d_longoption.size(value, longOption);
}
