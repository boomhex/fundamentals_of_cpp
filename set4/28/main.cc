#include "line.h"
#include <iostream>

int main()
{
    Line lineIter;
    cout << "Started testing.\n";
    while(lineIter.getLine())
    {
        string some = " ";
        cout << "Found a line.\n";
        while (some != "")
        {
            string some = lineIter.next();
            cout << "This line: " << some << '\n';
        }
    }
}
