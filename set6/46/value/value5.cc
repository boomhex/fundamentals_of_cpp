#include "value.ih"

Value::Value(int index, Token token)
:
    u_int(index),
    d_type(token)
{
    requireSpecial(token);
}
