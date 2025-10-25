#include "strings.ih"

void Strings::iterate(char **environlike)
{
    for (size_t iter = 0; iter != d_iterations; ++iter)
    {
        char **iterBegin;
        iterBegin = environlike;
        while (*iterBegin)
        {
            add(*iterBegin);
            ++iterBegin;
        }
        clear();
    }
}
