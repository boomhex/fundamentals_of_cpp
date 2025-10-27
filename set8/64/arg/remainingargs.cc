#include "arg.ih"

void Arg::remainingArgs(size_t optind, size_t argc, char **argv)
{
    d_nArgs = argc - optind;
    d_args = new string[d_nArgs];

    for (size_t i = optind; i != argc; ++i)
        d_args[i] = argv[i];
}