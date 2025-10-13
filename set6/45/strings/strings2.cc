#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(0),
    d_capacity(1),
    d_str(rawStrings(1))
{
    for (char **chptr = argv, **end = argv + argc; chptr != end; ++chptr)
        add(string{ *chptr });
}
