#ifndef LINE_H
#define LINE_H

#include <string>   // <-- needed for complete std::string
#include <cstddef>  // <-- for std::size_t
#include <iosfwd>

class Line
{
    std::string d_line{};
    std::size_t d_pos = 0;

    public:
        bool getLine();
        std::string next();
};

#endif