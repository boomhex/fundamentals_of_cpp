#include "../include/strings.ih"

void Strings::fill(char **ntbs)
{
    for (char const * const *ptr = ntbs; *ptr; ++ptr)
        add(string{ *ptr });
}
