#include "main.ih"

string lowercase(string str)
{
    for (char &ch : str)
        ch = tolower(ch);
    return str;
}
