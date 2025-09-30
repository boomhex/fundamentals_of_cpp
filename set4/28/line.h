#ifndef LINE_H
#define LINE_H

#include <string>

using namespace std;    // omit std

class Line
{
    string d_line;
    size_t d_position;

    public:
        bool getLine();
        string next();
};

#endif