#include "fch.ih"

void Fch::process()
{
    d_pos = 0;
    switch (d_action)
    {
        case NO_CHANGES:
            cerr << d_line << "\n";
        break;
        case CHANGE_ALL:
            changeAll();
            cerr << d_line << "\n";
        break;
        default:        //ask
            while (findTarget() && d_action == ASK)
                ask();
        break;
    }
    cout << d_line << '\n';
}