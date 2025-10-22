#include "handler.ih"

void Handler::destroyArgv()
{
    for (char **begin = d_argv + d_argc; begin-- != d_argv; )
        delete[] *begin;
    delete[] d_argv;
}
