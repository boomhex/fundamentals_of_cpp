#include <iostream>

using namespace std;

void showChar(char ch)
{
    switch (ch)
    {
        case '\n':
            cout << "char '\\n': ";
        break;
        case '\t':
            cout << "char '\\t': ";
        break;
        case ' ':
            cout << "char ' ': ";
        break;
        case 'a' - 'z':
            /* code */
        break;
        default:
            if (ch >= 32 && ch <= 126)
                cout << "char '" << ch << "': ";
            else
                cout << "char " << static_cast<int>(ch) << ": ";
        break;
    }
    
}