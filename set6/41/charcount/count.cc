#include "charcount.ih"

size_t CharCount::count(istream &input)
{
    size_t total = 0;
    char inCh;

    while (input.get(inCh))
    {
        size_t index = 0;                   // keeps track of char position
        // checks for action and position of char
        Action action  = locate(index, inCh);
        // pointer that points to the correct function.
        (this->*d_actions[action])(index, inCh);
        ++total;
    }
    return total;
}
