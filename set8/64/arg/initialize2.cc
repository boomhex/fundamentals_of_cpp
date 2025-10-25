#include "arg.ih"

Arg &Arg::initialize(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv)
{
    if (s_initialized)
        cerr << "Singleton class Arg already initialized\n";
        exit(1);
}