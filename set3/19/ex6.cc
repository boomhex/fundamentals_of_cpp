#include <string>
#include <iostream>
#include <cctype>

void toLowerString(std::string &someText)
{
    for (size_t index = 0; index < someText.length(); ++index)
    {
        someText[index] = std::tolower(someText[index]);
    }
}

int main()
{
    std::string text = "Hello, World!\n";
    std::cout  << "Before call:\t" << text;
    toLowerString(text);
    std::cout << "After call:\t" << text;

    // out:
    // Before call:    Hello, World!
    // After call:     hello, world!
}