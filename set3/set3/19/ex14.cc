#include <string>
#include <iostream>

using namespace std;    // omit std::

struct Person
{
    string name;
};

// Function returning const reference to avoid copying
string const &getName(const Person &somePerson)
{
    return somePerson.name;
}

int main()
{
    Person somePerson{"Alice"};
    string const &theirName = getName(somePerson); // no copy made
    cout << theirName << '\n';

}