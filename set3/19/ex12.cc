#include <string>
#include <iostream>

std::string greeting(std::string &name)
{
    std::string greetString = "Welcome, " + name;
    return greetString;
}

int main()
{
    std::string name = "Fred";
    std::cout << greeting(name) << '\n';
}
