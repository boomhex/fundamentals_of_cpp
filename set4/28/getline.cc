#include "line.h"
#include <iostream>

bool Line::getLine()
{
    if (not getline(cin, d_line))
        return false;   // return failure on failed getline
    else
    {
        d_position = 0;  // reset starting position
        size_t nonWsIndex = d_line.find_first_not_of(" \t\n");
        return not (nonWsIndex == string::npos);
    }
}
