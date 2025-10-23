#include "handler.ih"

Handler::ACTION Handler::correctAction(char ch)  const
{
    switch (ch)
    {
        case 'i':
            return INIT;
        break;
        case 'c':
            return CONNECT;
        break;
        case 'e':
            return ELEM;
        break;
        case 'f':
            return FILL;
        break;
        case 'k':
            return KILL;
        break;
        case 's':
            return SUM;
        break;
    }
}