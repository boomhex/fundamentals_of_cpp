#include "arg.ih"

Arg &Arg::initialize(char const *optstring, LongOption const *const begin,
            LongOption const *const end, int argc, char **argv)
{
    if (s_initialized)
    {
        cerr << "Singleton class Arg already initialized\n";
        exit(1);
    }
    s_initialized = true;
    s_instance = new Arg(optstring, begin, end, argc, argv);
    return *s_instance;
}
