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

        static void (Data::*s_destroy[3])();
        static void (Data::*s_copy[3])(Data const &);
        static void (Data::*s_move[3])(Data &);
        static void (Data::*s_swap[3][3])(Data &);

    Data(Data const &other, Type srcType);
    Data(Data &&other, Type srcType);

    void destroy(Type type);
    void swap(Data &other, Type thisType, Type otherType);

    private:
        void destroyDouble();
        void destroyWord();
        void destroyValue();

        void copyDouble(Data const &other);
        void copyWord(Data const &other);
        void copyValue(Data const &other);

        void moveDouble(Data &tmp);
        void moveWord(Data &tmp);
        void moveValue(Data &tmp);

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