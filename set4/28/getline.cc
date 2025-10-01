#include "line.h"
#include <iostream>

bool Line::getLine()
{
    if (not getline(cin, d_line))
        return false;   // return failure on failed getline
    else
    {
        d_pos = d_line.find_first_not_of(" \t\n");  // Find any non-ws
        return not (d_pos == string::npos); // Return whether one is found
    }
}
