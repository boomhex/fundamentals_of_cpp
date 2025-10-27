#include "arg.ih"

Arg const &Arg::instance()
{
    if (s_initialized)
        return *s_instance;
    
    cerr << "Not initialized\n";
    exit(1);
}