#include "main.ih"

void convert(char const *filepath)
{
    fstream fs{ filepath, ios::in | ios::out };          // open file
    if (!fs)    // if opening failed, nothing to do
        return;

    string line;
    ios::pos_type pos;

    while (true)
    {
        pos = fs.tellg();   // mark start of upcoming line
        if (!getline(fs, line)) // read a full line
            return;

        if (line.rfind("email:", 0) == 0)   // process email lines
        {
            line.replace(0, line.size(), lowercase(line));

            fs.seekp(pos);      // go back to the start of this line for overwrite
            fs.write(line.c_str(),
                     static_cast<std::streamsize>(line.size()));
            fs.put('\n');
        }
    }
}
