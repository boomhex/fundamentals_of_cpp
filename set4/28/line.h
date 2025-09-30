#ifndef LINE_H
#define LINE_H

#include <string>
#include <iostream>

using namespace std;    // omit std

class Line
{
    string d_line;
    size_t d_pos;

    public:
        bool getLine();
        string next();
};

#endif