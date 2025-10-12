#ifndef INCLUDED_SYMBOL_H_
#define INCLUDED_SYMBOL_H_

class Symbol
{

    enum CompareResult
    {
        LHS_FIRST,
        RHS_FIRST,
        EQUAL
    };

    std::string d_name;
    Value d_value;

    public:
        Symbol(std::string name, int value);        // symbol1.cc
        Symbol(std::string name, double value);     // symbol2.cc

        Value const &value()    const;          // value.cc
        int intValue()          const;          // intvalue.cc
        double doubleValue()    const;          // doublevalue.cc
        char charValue()        const;          // charvalue.cc
        Token token()           const;          // token.cc

        void assign(Value const &value);    // assign.cc

        CompareResult compare(std::string const &rhs)   const;  // compare.cc
};


#endif