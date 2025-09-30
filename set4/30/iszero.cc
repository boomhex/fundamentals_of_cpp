#include "calculator.h"

bool Calculator::isZero(double value)
{
    return abs(value) < 1e-8;
}