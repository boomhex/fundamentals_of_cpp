#include "value.ih"

void Value::intValue(int value)
{
    u_data.i_data = value;
    d_type = INT;
}
