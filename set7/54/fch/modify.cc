#include "fch.ih"

void Fch::modify()
{
    d_line.replace(d_pos, d_target.size(), d_replacement);
    d_pos += d_replacement.size();
}