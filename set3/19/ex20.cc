#include <string>
#include <iostream>

// Function returning rvalue-reference
std::string&& makeString() {
    return std::string("Hello,"); // temporary string
}

int main() {
    std::string&& stringTemp = makeString();  // binds to temporary
    stringTemp += " World!";                   // modifies the temporary
    std::cout << stringTemp << '\n';     // prints "Hello world"
}