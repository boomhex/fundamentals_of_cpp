#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    Strings()
{
    for (char **chptr = argv, **end = argv + argc; chptr != end; ++chptr)
        add(string{ *chptr });
}
