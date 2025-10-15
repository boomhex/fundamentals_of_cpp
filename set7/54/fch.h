#ifndef FCH_H
#define FCH_H
#include <iosfwd>
#include <string>

class Fch
{
    enum Action
    {
        ASK,
        CHANGE_ALL,
        NO_CHANGES
    };
    std::istream *d_input;
    std::string d_target;
    std::string d_replacement;
    public:
        Fch(char const *fname);         // maybe 0
        int run();

    private:
        void ask();
        void changeAll();
        bool findTarget();
        void modify();
        bool openInput(char const *fname);
        void process();
        char request() const;
        bool requestedN();
        void searchReplace();
        void showModification() const;
        void insertLine() const;
};

#endif