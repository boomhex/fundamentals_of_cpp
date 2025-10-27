#include "arg.ih"

Arg::~Arg()
{
    delete s_instance;
    delete[] d_args;
}