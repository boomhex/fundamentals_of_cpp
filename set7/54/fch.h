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
    std::fstream *d_input;
    bool d_opened;
    std::string d_target;
    std::string d_replacement;
    std::string d_line;
    size_t d_pos = 0;
    Action d_action = ASK;
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