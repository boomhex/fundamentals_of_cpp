#include "parser.ih"

bool Parser::pureDouble(double *dest, string const &str)
{
    size_t pos = 0;
    *dest = stod(str, &pos);
    if (pos != str.size())  // Ensure whole string is parsed
        return false;

    // Check whether value is integral
    d_integral = (str.find_first_of(".eE") == string::npos);
    return true;
}
