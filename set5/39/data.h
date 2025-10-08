#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>
#include "impl/dataimpl.h"

class Data
{
    DataImpl *d_dataImpl;

    public:
        Data();
        bool read();
        void display() const; 
};
        
#endif
