#include "copycat.ih"

CopyCat::CopyCat(size_t const argc, char const **argv)
{
    d_size = argc;
    d_data = nstbArrCopy(argv, argc);
}
