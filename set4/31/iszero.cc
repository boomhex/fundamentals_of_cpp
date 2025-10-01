#include "calculator.h"

bool Calculator::isZero(double value)
{
    // check if absolute value is < 1e-8, so it is considered a 0
    return abs(value) < 1e-8;
}