#ifndef INCLUDED_VALUE_H_
#define INCLUDED_VALUE_H_

class Value
{
    union
    {
        int u_int;
        char u_char;
        double u_double;
    };

    Token d_type;

    public:
        Value();                // value1.cc
        Value(int value);       // value2.cc
        Value(double value);    // value3.cc
        Value(char value);      // value4.cc
        Value(int idx, Token token);    // value5.cc

        // Accessors:
        int intValue()          const;  // intvalue1.cc
        double doubleValue()    const;  // doublevalue1.cc
        char charValue()        const;  // charvalue1.cc
        Token token()           const;  // token.cc

        // Modifiers:
        void intValue(int value);       // intvalue2.cc
        void doubleValue(double value); // doublevalue2.cc
        void charValue(char value);     // charvalue2.cc

    private:
        void requireSpecial(Token token); // requirespecial.cc
};


#endif