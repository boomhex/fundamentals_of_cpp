#include "strings.ih"

Strings::Strings(size_t nIterations, bool copy)
:
    d_size(0),
    d_str(0),
    d_iterations(nIterations)
{
    d_enlarge = copy ? &Strings::enlargeByCopy : &Strings::enlargeByMove;
}
