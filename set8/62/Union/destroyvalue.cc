#include "union.ih"

void Data::destroyValue()
{
    u_value = 0u;   // Not needed, but member is for consitency
                    // and this clears the value.
}