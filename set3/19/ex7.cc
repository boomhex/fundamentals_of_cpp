#include <iostream>

int someFunction(int value)
{
    return value;
}

int someRvalueFunction(int const &&value)
{
    return value;
}

int main()
{
    std::cout << "show val: "
    << someFunction(5) << '\n';

    std::cout << "show val: "           // Works, but only when called with
    << someRvalueFunction(5) << '\n';   // an rvalue.
}