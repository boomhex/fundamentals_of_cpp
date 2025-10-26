#include "Union/union.h"
#include <iostream>
#include <string>
#include <utility>   // std::move

int main()
{
    // 1) Build three initial objects
    double *arr = new double[10];
    for (std::size_t i = 0; i != 10; ++i)
        arr[i] = static_cast<double>(i) * 1.5;

    Data d1(arr);                         Data::Type t1 = Data::DOUBLE; // owns arr
    Data d2(std::string("hello union"));  Data::Type t2 = Data::WORD;
    Data d3(std::size_t(42));             Data::Type t3 = Data::VALUE;

    // 2) Show initial contents
    std::cout << "d1 (DOUBLE) first three: ";
    if (d1.asDouble())
        std::cout << d1.asDouble()[0] << ' '
                  << d1.asDouble()[1] << ' '
                  << d1.asDouble()[2] << '\n';
    else
        std::cout << "(nullptr)\n";

    std::cout << "d2 (WORD): "  << d2.asWord()  << '\n';
    std::cout << "d3 (VALUE): " << d3.asValue() << '\n';

    // 3) Copy WORD; Move DOUBLE
    Data c2(d2, t2);           Data::Type tc2 = t2;   // copy WORD
    Data m1(std::move(d1), t1);Data::Type tm1 = t1;   // move DOUBLE

    std::cout << "c2 (copy of d2 WORD): " << c2.asWord() << '\n';
    std::cout << "m1 (moved from d1 DOUBLE) first: ";
    if (m1.asDouble()) std::cout << m1.asDouble()[0] << '\n';
    else std::cout << "(nullptr)\n";

    std::cout << "d1 after move (should be nullptr): ";
    if (d1.asDouble()) std::cout << d1.asDouble()[0] << '\n';
    else std::cout << "(nullptr)\n";

    // 4) Cross-type swap: m1(DOUBLE) <-> d2(WORD)
    m1.swap(d2, tm1, t2);
    tm1 = Data::WORD;   // update tags
    t2  = Data::DOUBLE;

    std::cout << "After swap (m1<->d2):\n";
    std::cout << "  m1 (now WORD): " << m1.asWord() << '\n';
    std::cout << "  d2 (now DOUBLE) first: ";
    if (d2.asDouble()) std::cout << d2.asDouble()[0] << '\n';
    else std::cout << "(nullptr)\n";

    // 5) Cross-type swap: m1(WORD) <-> d3(VALUE)
    m1.swap(d3, tm1, t3);
    tm1 = Data::VALUE;
    t3  = Data::WORD;

    std::cout << "After swap (m1<->d3):\n";
    std::cout << "  m1 (now VALUE): " << m1.asValue() << '\n';
    std::cout << "  d3 (now WORD): "  << d3.asWord()   << '\n';

    // 6) Deep-copy test for DOUBLE:
    //    Make a copy of d2 (currently DOUBLE), modify the copy,
    //    verify the original is unchanged.
    Data cD2(d2, t2);        Data::Type tcD2 = t2;  // copy DOUBLE
    std::cout << "cD2 (copy of d2 DOUBLE) first before change: "
              << (cD2.asDouble() ? cD2.asDouble()[0] : 0.0) << '\n';

    if (cD2.asDouble())  cD2.asDouble()[0] = 999.0;

    std::cout << "cD2 first after change: "
              << (cD2.asDouble() ? cD2.asDouble()[0] : 0.0) << '\n';
    std::cout << "d2 first should be unchanged: "
              << (d2.asDouble() ? d2.asDouble()[0] : 0.0) << '\n';

    // 7) Nullptr DOUBLE copy test
    Data dNull(static_cast<double*>(0)); Data::Type tNull = Data::DOUBLE;
    Data cNull(dNull, tNull);            Data::Type tcNull = tNull;
    std::cout << "dNull ptr == " << dNull.asDouble()
              << ", cNull ptr == " << cNull.asDouble() << '\n';

    // 8) Clean up (explicitly destroy with the current types)
    c2.destroy(tc2);
    cD2.destroy(tcD2);
    cNull.destroy(tcNull);

    d3.destroy(t3);
    d2.destroy(t2);
    m1.destroy(tm1);
    d1.destroy(t1);
    dNull.destroy(tNull);

    std::cout << "Done.\n";
    return 0;
}