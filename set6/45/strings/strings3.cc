#include "strings.ih"

Strings::Strings(char **environLike)
:
    d_size(0),
    d_capacity(1),
    d_str(rawStrings(1))
{
    fill(environLike);
}
