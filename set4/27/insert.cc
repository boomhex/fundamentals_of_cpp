#include "person.ih"

void Person::insert(ostream &out) const
{
    out << name() << ','
        << address() << ','
        << phone() << ','
        << mass() << '\n';
}