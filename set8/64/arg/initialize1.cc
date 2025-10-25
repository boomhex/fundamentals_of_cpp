#include "arg.ih"

// static
Arg &Arg::initialize(char const *optstring, int argc, char **argv)
{
    if (s_initialized)
        cerr << "Singleton class Arg already initialized\n";
        exit(1);
}
