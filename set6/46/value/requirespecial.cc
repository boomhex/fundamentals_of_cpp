#include "value.ih"

void Value::requireSpecial(Token token)
{
    switch (token)
    {
        case QUIT:
        case ERROR:
        case IDENT:
        return;     // This is okay, return
        default:
            cerr << "internal error: forcing token "
                      << token
                      << " to value QUIT\n";
            d_type = QUIT;   // force it
        return;
    }
}
