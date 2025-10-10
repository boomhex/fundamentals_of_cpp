#include "value.ih"

double Value::doubleValue() const
{
    if (d_type != DOUBLE)
    {
        cerr << "WARNING: Double value requested from non-double Value obj.";
    }
    return u_data.f_data;
}
