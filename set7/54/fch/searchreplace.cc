#include "fch.ih"

void Fch::searchReplace()
{
    cerr << "Target: ";
    getline(cin, d_target);

    if (!d_target.empty())
    {
        cerr << "Replacement: ";
        getline(cin, d_replacement);
    }
    else
    {
        cerr << "Target is empty. No changes will be made\n";
        d_action = NO_CHANGES;
    }
}