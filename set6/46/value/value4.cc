#include "value.ih"

Value::Value(int index, Token token)
{
    u_data.i_data = index;
    d_type = token;
    requireSpecial(token);
}
