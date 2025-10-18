#include "handler.ih"

Handler::~Handler()
{
    destroyArgv();
    delete d_data;
}
