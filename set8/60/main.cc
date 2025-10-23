#include <iostream>
#include <string>

using namespace std;

class Demo
{
    std::string d_ident;

    public:
        Demo(std::string const &name)
        :
            d_ident(name)
        {
            cout << "Constructor called\n";
        }
        ~Demo()
        {
            cout << "Destructor called\n";
        }
        Demo(Demo &&tmp)
        :
            d_ident(std::move(tmp.d_ident)) // Use string's move ctor for ident
        {
            cout << "Move elision called\n";
        }
        Demo(Demo const &other)
        :
            d_ident(other.ident())
        {
            cout << "Copy called\n";
        }
        Demo &operator=(Demo &&tmp)
        {
            cout << "Move assignment called\n";
            std::swap(d_ident, tmp.d_ident);
            return *this;
        }
        Demo &operator=(Demo const &other)
        {
            cout << "Copy assignment called\n";
            Demo tmp{ other };  // Copy, then use move assignment
            return *this = std::move(tmp);
        }
        std::string const &ident() const
        {
            return d_ident;
        }

};

Demo factory()
{
    Demo demoFac("demofac");
    return demoFac;
}

int main()
{
    cout << "1.\n";     // Copy elision
    Demo demo1("demo1");
    Demo demo2{ demo1 };

    cout << "2.\n";     // Move elision
    Demo demo3(std::move(demo1));

    cout << "3.\n";     // Copy assignment
    demo3 = demo2;

    cout << "4.\n";     // Move assignment
    demo3 = factory();

    cout << "5.\n";     // Destructors
}