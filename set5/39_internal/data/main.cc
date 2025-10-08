#include "main.ih"

int main()
{
    Data data;
    size_t count = 0;

    while (data.read())
    {
        cout << "Object " << ++count << ": ";
        data.display();
    }
}
