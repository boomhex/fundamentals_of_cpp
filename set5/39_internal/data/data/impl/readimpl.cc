#include "dataimpl.ih"

bool DataImpl::read()
{   
    d_text.clear();
    cin >> d_value;
    return cin.good();
}
