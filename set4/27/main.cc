#include "main.ih"

int main()
{
    size_t const size = 5;
    Person persons[size];

    readPerson(persons, size, cin);
    writePerson(persons, size, cout);
}