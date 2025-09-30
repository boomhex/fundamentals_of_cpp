#include "calculator.h"

void Calculator::run()
{
    while(true)
    {
        string input;
        cout << "? ";
        getline(cin, input);
        if (input.empty())
        {
            break;
        }
        d_line.clear();
        d_line.str(input);
        if (expression())
        {
            evaluate();
        }
        else
        {
            cout << "Invalid input\n";
        }
    }
}