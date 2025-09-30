#include "line.h"
#include <string>
#include <iostream>

string Line::next()
{
    if (d_position == string::npos)
        return "";

    // Move position, and return new substring.
    size_t endingPosition = d_line.find_first_of(" \t\n", d_position);
    cout << "Debug 1: " << endingPosition << '\n';
    string substring = d_line.substr(d_position, endingPosition - d_position);
    d_position = endingPosition;
    return substring;
}
