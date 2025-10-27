#include "arg.ih"

char const *Arg::arg(unsigned idx)    const
{
    if (idx >= d_nArgs)
    {
        cerr << "Invalid idx requested\n";
        return "\0";
    }
    return d_args[idx].c_str();
}
