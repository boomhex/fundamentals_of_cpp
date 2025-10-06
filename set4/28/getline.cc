#include "line.ih"

bool Line::getLine()
{
    if (not getline(cin, d_line))
        return false;   // return failure on failed getline

    d_pos = d_line.find_first_not_of(" \t\n");  // Find any non-ws
    return (d_pos != string::npos); // Return whether one is found
}
