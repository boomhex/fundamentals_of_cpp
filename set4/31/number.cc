#include "calculator.h"
#include <cmath>

bool Calculator::number(double *dest, bool *isInt)
{
    string number;
    d_line >> number;                       // get next substring
    try
    {
        *dest = stod(number);               // try to convert string to number
    }
    catch (...)
    {
        return false;
    }
    double intNum;
    *isInt = modf(*dest, &intNum) == 0.0;   // check if number is int
    return true;
}