#include <string>
#include <iostream>

struct Person
{
    std::string name;
};

std::string &accessName(Person& peeps)
{
    return peeps.name;
}

int main()
{
    Person someGuy{"Pete"};

    std::string &someName = accessName(someGuy);

    someName = "John";   // Pete did not like his name, and liked John better

    std::cout << "SomeGuy's name: " << someGuy.name << '\n';
}