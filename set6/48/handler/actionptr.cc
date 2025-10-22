#include "handler.ih"

int (Handler::*Handler::s_actionPtr[])() = 
{
    &Handler::initialize,       // INIT
    &Handler::confirmConnect,    // CONNECT
    &Handler::element,          // ELEM
    &Handler::fill,              // FILL
    &Handler::kill,             // KILL
    &Handler::sum               // SUM
};
