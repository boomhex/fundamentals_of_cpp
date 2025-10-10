#ifndef INCLUDED_VALUE_H_
#define INCLUDED_VALUE_H_

class Value
{
    union Data
    {
        int i_data;
        char c_data;
        double f_data;
    };

    Data u_data;
    Token d_type;

    public:
        Value();                // value1.cc
        Value(int value);       // value2.cc
        Value(double value);    // value3.cc
        Value(int idx, Token token);    // value4.cc

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