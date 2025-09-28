#include "person.ih"

void Person::extract(istream &in)
{
    string name;
    getline(in, name, ',');
    string address;
    getline(in, address, ',');
    string phone;
    getline(in, phone, ',');
    string mass;
    getline(in, mass, '\n');;

    setName(name);
    setAddress(address);
    setPhone(phone);
    setMass(stoul(mass));
}