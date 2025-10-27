#include "arg.ih"

Arg::Arg(char const *optstring, int argc, char **argv)
:
    Arg(optstring, 0, 0, argc, argv)    // Init begin, end with nullptr
{

}