#include <string>
#include <iostream>

using namespace std;    // omit std::

void avoidCopy(string &&text)
{
    cout << text;
}

void makesCopy(string text)
{
    cout << text;
}

string returnsString()
{
    string text = "Hello, World!";
    return text;
}

int main()
{
    makesCopy(returnsString());     // Uses a copy to print the string.
    avoidCopy(returnsString());     // Does not use a copy to print the string.
}