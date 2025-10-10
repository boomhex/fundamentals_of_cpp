#include "value.ih"

Value::Value(int value)
{
    u_data.i_data = value;
    d_type = INT;
}