#include "parser.ih"

bool Parser::pureDouble(double *dest, string const &str)
{
    size_t pos = 0;
    *dest = stod(str, &pos);
    if (pos != str.size())  // Ensure whole string is parsed
        return false;

    // Check if value is integral
    if (str.find_first_of(".eE") == string::npos)
        d_integral = true;  // No floating point chars found.
    else
        d_integral = false; // floating point chars found.

    return true;
}
