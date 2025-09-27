#include <iostream>

int maxInteger(int one, int two)
{
    return one > two ? one : two;
}

int main()
{
    int valueOne = 20;  // assign some variables
    int valueTwo = 30;

    int valueMax = maxInteger(valueOne, valueTwo);  // function call in main

    std::cout << "Maximum : " << valueMax << '\n';
}