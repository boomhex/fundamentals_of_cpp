#include "calculator.h"

bool Calculator::getOperator()
{
    string allowedOp = "+-/*%";
    d_line >> d_operator;
    
    if (allowedOp.find(d_operator) == string::npos)
        return false;

    return true;
}