#include "fch.ih"

void Fch::changeAll()
{
    while (findTarget())
        modify();
}