#include "arg.ih"


Arg::Arg(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv)
:
    d_optString(optstring),
    d_shortoption(),
    d_longoption(),
    d_longOnlyCount(0),
    d_nArgs(0),
    d_args(0),
    d_basename(makeBasename(argv[0]))
{
    parse(optstring, begin, end, argc, argv);
}
