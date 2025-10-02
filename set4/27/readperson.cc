#include "main.ih"

void readPerson(Person persons[], size_t size, istream &in)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        cout << "? ";
        persons[idx].extract(in);           // extract person information
    }
}