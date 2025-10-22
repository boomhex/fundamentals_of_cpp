#include "handler.ih"


int Handler::run()
{
    char in;
    in = d_argv[0][0];

    if (not validArgument(in))
    {
        cerr << "Invalid argument, check usage..";
        return 1;
    }

    ACTION action = correctAction(in);
    return (this->*s_actionPtr[action])();
}
