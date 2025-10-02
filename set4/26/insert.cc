#include "person.ih"

void Person::insert(ostream &out) const
{
    out << name() << ','        // print output
        << address() << ','
        << phone() << ','
        << mass() << '\n';
}