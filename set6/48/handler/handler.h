#ifndef _INCLUDED_HANDLER_
#define _INCLUDED_HANDLER_

#include "../data/data.h"
#include <string>

class Handler
{
    size_t d_argc;
    char **d_argv;
    Data *d_data;                   // points to the shared memory info

    // static data members

    public:
        Handler(size_t argc, char **argv);                       // handler1.cc
        ~Handler();                 // disconnects shared memory    handler2.cc

        int run();

    private:
        int initialize();           // create/initialize a shared mem. block
        int confirmConnect();        // connect the shared block d_argv[1]
        int element();              // show shared data element d_argv[2]
        int fill();                  // fill the data with seed d_argv[2]
        int kill();                 // delete shared segment ID
        int sum();                  // show the current sum

        bool available(size_t nRequired);
        bool connect();
        bool specified(size_t nRequired);

        char *ntbsCopy(char const *ntbs);

        void destroyArgv();
};

#endif