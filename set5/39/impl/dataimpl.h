#ifndef INCLUDED_DATAIMPL_
#define INCLUDED_DATAIMPL_

#include <string>

class DataImpl
{
    std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const; 
};
        
#endif
