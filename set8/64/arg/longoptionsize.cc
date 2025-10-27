#include "arg.ih"

int Arg::longOptionSize(LongOption const *const begin,
    LongOption const *const end)    const
{
    return end - begin;
}
