#include "value.ih"

void Value::doubleValue(double value)
{
    u_data.f_data = value;
    d_type = DOUBLE;
}
