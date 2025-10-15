#include "fch.ih"

void Fch::ask()
{
    showModification();
    cerr << "change [ynYN]?\n";
    char const ans = request();
    switch (ans)
    {
        case 'y':
            modify();
        break;
        case 'n':
            d_pos += d_target.size();
        break;
        case 'Y':
            changeAll();
            d_action = CHANGE_ALL;
        break;
        case 'N':
            d_action = NO_CHANGES;
        break;
        default:
            cerr << "please answer only with [ynYN]\n";
        break;
    }
}