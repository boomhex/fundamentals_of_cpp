#include "strings.ih"

Strings::Strings(istream &in)
:
    Strings()
{
    string line;
    while (getline(in, line))
        add(line);
}
