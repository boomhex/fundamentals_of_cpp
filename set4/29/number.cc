#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string nextStr = next();
    if (nextStr.empty())  // Empty string means last substring has been parsed
        return EOLN;
    return convert(dest, nextStr);
}
