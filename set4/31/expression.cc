#include "calculator.h"

bool Calculator::expression()
{
    // check if first input is a valid number
    if (!number(&d_number1, &d_num1Int))    
        return false;
    // check if second input is a valid operator
    if (!getOperator())
        return false;
    // check if third input is a valid number
    if (!number(&d_number2, &d_num2Int))
        return false;
    // check if there is more after the expression
    string extra;
    if (d_line >> extra)
        return false;
    // all requirements for module calculations
    if (d_operator == '%')
    {
        // check if both numbers are int
        if (!d_num1Int || !d_num2Int)
            return false;
        // check if a number is non positive
        if (d_number1 < 0 || d_number2 < 0)
            return false;
        // check if number 2 is zero
        if (isZero(d_number2))
            return false;
    }
    // check if number 2 is zero with a /
    if (d_operator == '/' && isZero(d_number2))
        return false;
    return true;
}