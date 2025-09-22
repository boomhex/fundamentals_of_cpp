#include <iostream>

struct SomeStruct
{
    int someValue = 0;
};

int &accessValue(SomeStruct& structTest)
{
    return structTest.someValue;
}

int main()
{
    SomeStruct structOne {10};
    int &valueReference = accessValue(structOne);

    valueReference = 2;
    std::cout << structOne.someValue << '\n';
}