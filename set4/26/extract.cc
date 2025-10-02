#include "person.ih"

void Person::extract(istream &in)
{
    string name;
    getline(in, name, ',');     // get name substring 
    string address;
    getline(in, address, ',');  // get address substring
    string phone;
    getline(in, phone, ',');    // get phone substring
    string mass;
    getline(in, mass, '\n');    // get mass substring

    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(stoul(mass));
}