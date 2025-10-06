#include "calculator.ih"

bool Calculator::getOperator()
{
    string allowedOp = "+-/*%";     // all allowed operators
    d_line >> d_operator;           // get operator substring

    // check if the operator is allowed
    return allowedOp.find(d_operator) != string::npos;
}