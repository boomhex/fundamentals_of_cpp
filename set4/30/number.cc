#include "calculator.h"
#include "../29/parser.h"   // adjust include path to match your structure

bool Calculator::number(double *dest, bool *isInt)
{
    Parser parser;

    switch (parser.number(dest))
    {
        case Parser::NUMBER:
            *isInt = parser.isIntegral();
            return true;

        case Parser::EOLN:
        case Parser::NO_NUMBER:
        default:
            return false;
    }
}