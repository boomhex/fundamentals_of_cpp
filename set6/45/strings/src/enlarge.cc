#include "../include/strings.h"

void Strings::enlarge()
{
    resize(d_capacity * 2); // Double capacity
}