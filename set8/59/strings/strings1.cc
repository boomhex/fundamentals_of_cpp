#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_str(0),
    d_iterations(0),
    d_enlarge(&Strings::enlargeByCopy)
{}
