#include <iostream>

void toAbsolute(int &value)
{
    if (value < 0)
        value *= -1;
}

int main()
{
    int someNumber = -1;
    std::cout << "Before abs call: " << someNumber << '\n'; // out: Before abs: -1
    toAbsolute(someNumber);
    std::cout << "After abs call: " << someNumber << '\n'; // out: After abs: 1
}