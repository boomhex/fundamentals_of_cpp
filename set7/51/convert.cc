#include "main.ih"

void convert(char const *filepath)
{
    fstream fs{ filepath, ios::in | ios::out};
    if (!fs)
        return;

    string line;
    ios::pos_type pos;

    while (true)
    {
        pos = fs.tellg();
        if (!getline(fs, line))
            return;

        if (line.rfind("email:", 0) == 0) 
        {
            line.replace(0, line.size(),lowercase(line));

            fs.seekp(pos);
            fs.write(line.c_str(), static_cast<std::streamsize>(line.size()));
            fs.put('\n');
        }
    }
}