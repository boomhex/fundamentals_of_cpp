#include "charcount.ih"

void showChar(unsigned char ch)
{
    switch (ch)
    {
        case '\n':
            cout << "char '\\n': ";
        break;
        case '\t':
            cout << "char '\\t': ";
        break;
        default:
            if (ch >= ' ' && ch <= '~')   // check if it is a printable
                cout << "char '" << ch << "': ";
            else                          // else print the interger
                cout << "char " << static_cast<int>(ch) << ": ";
        break;
    }
    
}