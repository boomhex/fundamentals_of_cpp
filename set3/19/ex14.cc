#include <string>
#include <iostream>

using namespace std;    // omit std::

struct Person {
    string name;
};

// Function returning const reference to avoid copying
const string& getName(const Person& p) {
    return p.name;
}

int main() {
    Person p{"Alice"};
    const string& n = getName(p); // no copy made
    cout << n << std::endl;

}