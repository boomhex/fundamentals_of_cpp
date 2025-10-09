<<<<<<< HEAD
#include "main.ih"
=======
#include "charcount.ih"
>>>>>>> f54d806b30235669e0100e5e76d0895aece4203e

using namespace std;

int main()
{
    CharCount charcount;
    charcount.count(cin);

    const CharInfo &info = charcount.info();
    
    for (size_t i = 0; i < info.nCharObj; ++i) {
        showChar(info.ptr[i].ch);
        cout << info.ptr[i].freq << " times\n";
    }
}