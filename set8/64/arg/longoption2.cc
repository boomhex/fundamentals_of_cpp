#include "arg.ih"

Arg::LongOption::LongOption(char const *name, int optionChar)
:
    d_name{ name },
    d_type(Type::None),
    d_shortOption(optionChar)
{
}
