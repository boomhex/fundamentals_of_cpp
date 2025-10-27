#include "arg.ih"

// static
Arg &Arg::initialize(char const *optstring, int argc, char **argv)
{
    if (not s_initialized)
    {
        cerr << "Singleton class Arg already initialized\n";
        exit(1);
    }
    s_initialized = true;
    s_instance = new Arg(optstring, argc, argv);
    return *s_instance;
}
