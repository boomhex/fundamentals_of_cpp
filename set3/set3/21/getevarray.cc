#include "main.ih"

extern char **environ; 

void getEVArray(string arr[], size_t size)
{
    size_t idx = 0;
    for (char **env = environ; *env != nullptr && idx < size; ++env)
        arr[idx++] = *env;
}