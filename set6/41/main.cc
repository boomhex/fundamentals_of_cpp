#include "main.ih"

int main()
{
    CharCount charcount;
    charcount.count(cin);

    const CharCount::CharInfo &info = charcount.info();
    
    for (size_t idx = 0; idx != info.nCharObj; ++idx) {
        showChar(info.ptr[idx].ch);
        cout << info.ptr[idx].freq << " times\n";
    }
    cout << "\nFinal capacity: " << charcount.capacity() << "\n";
}