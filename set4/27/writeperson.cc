#include "main.ih"

void writePerson(Person persons[], size_t size,ostream &out)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        persons[idx].insert(out);
    }
}