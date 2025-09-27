#include "main.ih"

extern char **environ; 

size_t numberOfEV()
{
    size_t size = 0;
    for (char **env = environ; *env != nullptr; ++env)
        ++size;
    return size;
}