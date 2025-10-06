#include "line.h"
#include <iostream>

int main()
{
    Line someLine;

    while (someLine.getLine()) // Read through lines
    {
        std::cout << "Getting line" << '\n';

        std::string nextStr;
        while (not ((nextStr = someLine.next()) == ""))   // Read all substr
            std::cout << "Token: " << nextStr << "\n";    // until empty
    }
}
