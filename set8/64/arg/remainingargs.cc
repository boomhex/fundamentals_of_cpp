#include "arg.ih"

void Arg::remainingArgs(size_t optind, size_t argc, char **argv)
{
    d_nArgs = argc - optind;
    d_args = new string[d_nArgs + 1];

    for (size_t idx = optind; idx != argc; ++idx){
        d_args[idx] = argv[optind];
    }
}
