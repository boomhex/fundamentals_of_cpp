#include "handler.ih"

Handler::Handler(size_t argc, char **argv)
:
    d_argc(argc - 1)
{
    d_argv = new char*[d_argc];

    // Copy argvs to data member, skip argv[0]
    for (size_t idx = 1; idx != argc; ++idx)
        d_argv[idx] = ntbsCopy(argv[idx]);

    d_data = new Data();
}
