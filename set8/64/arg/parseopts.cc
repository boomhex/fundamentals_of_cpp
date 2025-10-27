#include "arg.ih"

void Arg::parseOpts(OptStructArray opts, LongOption const *const begin,
    LongOption const *const end)
{
    size_t size = end - begin;

    for (size_t idx = 0; idx != size; ++idx)
        copyToOptStruct(opts.get(), begin, idx);

}
