#include "arg.ih"

size_t Arg::option(std::string *value, int option) const
{
    return d_shortoption.size(value, option);
}
