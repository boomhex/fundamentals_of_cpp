#include "fch.ih"

 void Fch::insertLine() const
 {
    string marks(d_target.size(), '^');
    string spaces(d_pos, ' ');
    cerr << spaces << marks << '\n';
 }