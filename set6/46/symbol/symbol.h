#ifndef INCLUDED_SYMBOL_H_
#define INCLUDED_SYMBOL_H_

class Symbol
{

    string d_name;
    Value d_value;

    public:
        Symbol(string input);   // symbol1.cc
        Symbol(int value);      // symbol2.cc
        Symbol(double value);   // symbol3.cc

        Value const &value();          // value.cc

        void assign(Value const &value);    // assign.cc
};


#endif