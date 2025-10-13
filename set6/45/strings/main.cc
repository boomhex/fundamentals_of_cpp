#include "strings.ih"

int main(int argc, char **argv, char **env)
{
    Strings strings(argc, argv);

    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
}
