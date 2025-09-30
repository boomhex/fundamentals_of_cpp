#include "calculator.h"
#include <cmath>

bool Calculator::number(double *dest, bool *isInt)
{
    string number;
    d_line >> number;
    try
    {
        *dest = stod(number);
    }
    catch (...)
    {
        return false;
    }
    double intNum;
    *isInt = modf(*dest, &intNum) == 0.0;
    return true;
}