#include "internal_indent.ih"

int &depth()    // return a reference to an int, to to modify inplace
{
    static int indentation_depth = 0;   // initialize static int for block scope
    return indentation_depth;
}
