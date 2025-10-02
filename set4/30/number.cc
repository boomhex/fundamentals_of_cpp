#include "calculator.h"
#include <cmath>

bool Calculator::number(double *dest, bool *isInt)
{
    string number;
    d_line >> number;                       // get next substring
    // check if only contains valid numbers and symbols
    if (!hasOnly("0123456789.-", number)) 
        return false;
    // check if - is only infront
    if ((number.find_last_of('-') != 0) && number.find_last_of('-') != string::npos)
        return false;

    *isInt = hasOnly("-0123456789", number);  // check if number is int

    // check at most one dot with floating numbers
    if (number.find_first_of('.') != number.find_last_of('.') && !*isInt)
        return false;

     *dest = stod(number);                   // convert string to number
    return true;
}