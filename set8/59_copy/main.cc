#include "main.ih"

int main(int argc, char **argv, char **environ)
{
    if (argc < 2)
        cerr << "Usage: " << argv[0] << " <nIterations> [move]";

    size_t iterations;  // Extract iterations
    iterations = stoi(argv[1]);

    bool copy;        // Determine mode
    copy = (argc > 2);

    Strings strings1(iterations, copy);
    strings1.iterate(environ);
}
