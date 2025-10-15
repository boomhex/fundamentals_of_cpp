#include "fch.ih"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "usage: " << argv[0] << " <file>\n";
        return 1;
    }

    Fch fch{ argv[1] };
    return fch.run();
}