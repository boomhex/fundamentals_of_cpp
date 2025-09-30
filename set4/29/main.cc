#include "parser.ih"
#include <iostream>

int main()
{
    Parser parser;
    double value;

    while (parser.reset()) // read next line
    {
        Parser::Return res;
        while ((res = parser.number(&value)) != Parser::EOLN)
        {
            if (res == Parser::NUMBER)
            {
                std::cout << "Parsed number: " << value
                          << " (integral? " << std::boolalpha
                          << parser.isIntegral() << ")\n";
            }
            else
            {
                std::cout << "Not a number\n";
            }
        }
    }
}
