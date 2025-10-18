#include "main.ih"


int main(int argc, char **argv)
{
    bool showAll;
    showAll = allFlag(argc, argv);

    string path;
    path = inputPath(argc, argv);

    PacctFile file(path, showAll);
    cout << file.records();
}
