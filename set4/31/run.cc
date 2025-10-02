#include "calculator.h"
#include <iostream>

void Calculator::run()
{
    while(true)
    {
        string input;
        cout << "? ";
        getline(cin, input);        // get input
        if (input.empty())          // if line is empty, stop program
        {
            break;
        }
        d_line.clear();             // reset the state of the stream               
        d_line.str(input);          // put new input string into the stream
        if (expression())           // check expression correctness
        {
            evaluate();             // calculate
        }
        else
        {
            cout << "Invalid input\n";  // error flag
        }
    }
}