#include "line.ih"
#include <string>
#include <iostream>

string Line::next()
{
    if (d_pos == string::npos)     // Empty string on line end.
        return "";

    size_t endPos = d_line.find_first_of(" \t\n", d_pos);   // Find end substr
    string subString = d_line.substr(d_pos, endPos - d_pos);
    d_pos = d_line.find_first_not_of(" \t\n", endPos);  // Update new pos
    return subString;
}
