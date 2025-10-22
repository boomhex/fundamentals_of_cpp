#include "numbers/numbers.h"
#include <iostream>

int main()
{
    Numbers numbers1(8);    // Initialize Numbers with 8 unitialized ints
    numbers1.write(std::cout);
    std::cout << '\n';
}
