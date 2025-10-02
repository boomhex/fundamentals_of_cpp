#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string nextStr = next();
    if (nextStr == "")  // Empty string means last substring has been parsed
        return EOLN;
    else
        return convert(dest, nextStr);
}
