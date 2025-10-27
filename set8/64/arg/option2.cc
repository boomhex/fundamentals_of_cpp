#include "arg.ih"

size_t Arg::option(std::string const &options) const
{
    size_t count;
    count = 0;
    for (size_t idx = options.size(); idx--; ){
        count += option(options[idx]);
    }
    return count;
}
