#include "value.ih"

Value::Value(double value)
{
    u_data.f_data = value;
    d_type = DOUBLE;
}
