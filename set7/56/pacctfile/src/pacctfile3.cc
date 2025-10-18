#include "../include/pacctfile.ih"

PacctFile::PacctFile(string const &path, bool showAll)
:
    d_path(path),
    d_showAll(showAll)
{

}