#include "value.ih"

char Value::charValue() const
{
    if (d_type != CHAR)
        cerr << "WARNING: Char value requested from non-char Value obj.";

    return u_char;
}
