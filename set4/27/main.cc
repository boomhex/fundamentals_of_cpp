#include "main.ih"

int main()
{
    size_t const size = 5;          // number of persons
    Person persons[size];           // array of person objects

    readPerson(persons, size, cin);
    writePerson(persons, size, cout);
}