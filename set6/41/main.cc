#include "charcount/charcount.ih"
#include <iostream>


int main()
{
    CharCount charcount;
    charcount.count(cin);

    const CharCount::CharInfo &info = charcount.info();
    
    for (size_t i = 0; i < info.nCharObj; ++i) {
        showChar(info.ptr[i].ch);
        cout << info.ptr[i].freq << " times\n";
    }
    cout << "\nFinal capacity: " << charcount.capacity() << "\n";
}