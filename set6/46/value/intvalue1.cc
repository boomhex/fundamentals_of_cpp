#include "value.ih"

int Value::intValue()   const
{
    if (d_type != INT)
        cerr << "WARNING: Int value requested from non-int Value obj.";

    return u_int;
}
