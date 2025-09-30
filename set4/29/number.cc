#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string nextStr = next();
    if (nextStr == "")
        return EOLN;
    else
        return convert(dest, nextStr);
}
