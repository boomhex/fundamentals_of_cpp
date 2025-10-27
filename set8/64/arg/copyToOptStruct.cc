#include "arg.ih"

void Arg::copyToOptStruct(OptStruct *opts,
    LongOption const *const optPtr, size_t idx)     const
{
    opts[idx].name = optPtr[idx].name();
    opts[idx].flag = 0;
    opts[idx].val  = optPtr[idx].shortoption();

    switch (optPtr[idx].type())
    {
        case None:
            opts[idx].has_arg = no_argument;
        break;
        case Required:
            opts[idx].has_arg = required_argument;
        break;
        default:
            opts[idx].has_arg = optional_argument;
    }
}
