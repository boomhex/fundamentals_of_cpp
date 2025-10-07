#include "copycat.ih"

CopyCat::CopyCat(size_t argc, char **argv)
{
    d_size = argc;
    d_data = ntbsArrCopy(argv, argc);
}
