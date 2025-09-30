#include "calculator.h"

bool Calculator::expression()
{
    
    if (!number(&d_number1, &d_num1Int))
        return false;
    if (!getOperator())
        return false;
    if (!number(&d_number2, &d_num2Int))
        return false;
    if (d_operator == '%')
    {
        if (!d_num1Int || !d_num2Int)
            return false;
        if (d_number1 < 0 || d_number2 < 0)
            return false;
        if (isZero(d_number2))
            return false;
    }
    if (d_operator == '/' && isZero(d_number2))
        return false;
    return true;
}