#include "arg.ih"

Arg::LongOption::LongOption(char const *name, Arg::Type type = Arg::None)
:
    d_name{ name },
    d_type(type),
    d_shortOption(0)
{
}
