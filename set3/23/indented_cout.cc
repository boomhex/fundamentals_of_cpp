#include "indent.h"
#include "internal_indent.ih"

#include <iostream>

using namespace std;    // omit std::

ostream &indented_cout()
{
    step_locked() = true;   // lock the stepsize after 1st call
    for (size_t i = 0; i != static_cast<size_t>(depth()); ++i)
        cout << ' ';    // indent for each depth

    return cout;
}