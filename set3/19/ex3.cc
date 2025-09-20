#include <iostream>

void displayConstRef(int const &value)  // Non preferred way. Less intuitive,
{                                       // and less efficient.
    std::cout << value << '\n';
}

void displayCopy(int value)  // Preferred way. Simpler, and more efficient.
{
    std::cout << value << '\n';
}