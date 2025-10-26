#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <cstddef>
#include <string>

union Data
{
    enum Type
    {
        DOUBLE,
        WORD,
        VALUE
    };
    private: 
        double *u_double;
        std::string u_word;
        size_t u_value;

        // pointers to members
        static void (Data::*s_destroy[3])();
        static void (Data::*s_copy[3])(Data const &);
        static void (Data::*s_move[3])(Data &);
        static void (Data::*s_swap[3][3])(Data &);

    public: 
        // all type constructors
        Data(double *ptr);
        Data(std::string const &word);
        Data(std::size_t value);

        // move/copy constructor
        Data(Data const &other, Type srcType);
        Data(Data &&other, Type srcType);

        ~Data();

        void destroy(Type type);
        void swap(Data &other, Type thisType, Type otherType);

        // Accessors
        double *asDouble() const;
        std::string &asWord();
        std::size_t &asValue();

    private:
        // destroy members
        void destroyDouble();
        void destroyWord();
        void destroyValue();

        //copy members
        void copyDouble(Data const &other);
        void copyWord(Data const &other);
        void copyValue(Data const &other);

        // move members
        void moveDouble(Data &tmp);
        void moveWord(Data &tmp);
        void moveValue(Data &tmp);

        // swap members
        void swapDoubleDouble(Data &other);
        void swapWordWord(Data &other);
        void swapValueValue(Data &other);

        void swapDoubleWord(Data &other);
        void swapDoubleValue(Data &other);
        void swapWordValue(Data &other);

        void swapWordDouble(Data &other);
        void swapValueDouble(Data &other);
        void swapValueWord(Data &other);
};

#endif