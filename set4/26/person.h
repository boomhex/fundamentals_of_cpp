#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
    string d_name;         // name of person
    string d_address;      // address field
    string d_phone;        // telephone number
    size_t d_mass;         // the mass in kg.

    public:                     // member functions
        void setName(string const &name);
        void setAddress(string const &address);
        void setPhone(string const &phone);
        void setMass(size_t mass);
        bool hasOnly(char const *characters, string const &object);

        string const &name()    const;
        string const &address() const;
        string const &phone()   const;
        size_t mass()           const;
        
        void insert(ostream &out)   const;
        void extract(istream &in);
};
#endif