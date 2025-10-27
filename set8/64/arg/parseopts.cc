#include "arg.ih"

OptStruct *Arg::parseOpts(LongOption const *const begin,
    LongOption const *const end)
{
    size_t size = end - begin;
    OptStruct *opts = new OptStruct[size]();

    for (size_t idx = 0; idx != size; ++idx)
        copyToOptStruct(opts, begin, idx);

    return opts;
}
