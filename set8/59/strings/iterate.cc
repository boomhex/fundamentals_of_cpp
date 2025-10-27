#include "strings.ih"

void Strings::iterate(char **environlike)
{
    for (size_t iter = 0; iter != d_iterations; ++iter)
    {
        char **iterBegin;
        iterBegin = environlike;
        while (*iterBegin)  // Perform add iterations until nullptr
        {
            add(*iterBegin);
            ++iterBegin;
        }
        clear();    // Clear for next iteration
    }
}
