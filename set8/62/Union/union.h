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

        void destroy(Type type);
        void swap(Data &other, Type thisType, Type otherType);      // TODO

        // Accessors
        double *asDouble(Type type) const;
        std::string &asWord(Type type);
        std::size_t &asValue(Type type);

    private:
        // destroy members
        void destroyDouble();
        void destroyWord();
        void destroyValue();

        //copy members
        void copyDouble(Data const &other);             // TODO
        void copyWord(Data const &other);               // TODO
        void copyValue(Data const &other);              // TODO

        // move members
        void moveDouble(Data &tmp);
        void moveWord(Data &tmp);
        void moveValue(Data &tmp);

        // swap members
        void swapDoubleDouble(Data &other);             // TODO
        void swapWordWord(Data &other);                 // TODO 
        void swapValueValue(Data &other);               // TODO

        void swapDoubleWord(Data &other);               // TODO
        void swapDoubleValue(Data &other);              // TODO
        void swapWordValue(Data &other);                // TODO

        void swapWordDouble(Data &other);               // TODO
        void swapValueDouble(Data &other);              // TODO
        void swapValueWord(Data &other);                // TODO

        
};

#endif