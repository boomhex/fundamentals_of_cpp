#include "fch.ih"

void Fch::showModification() const
{
    cerr << '\n' << d_line << '\n';
    insertLine();
    string spaces(d_pos, ' ');
    cerr << spaces << d_replacement << '\n';
}