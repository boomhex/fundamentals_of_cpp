#include "arg.ih"

string Arg::makeBasename(char *basepath)   const
{
    char *base;
    base = ::basename(basepath);
    return base;
}
