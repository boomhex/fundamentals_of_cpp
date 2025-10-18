#include "../include/pacctfile.ih"

string PacctFile::records()     const
{
    ifstream binFile(d_path, ios::binary);
    if (not binFile) {
        cerr << "Cannot open: " << d_path << '\n';
        return {};
    }
    string records{};
    acct_v3 singleRecord;
    while (binFile)
    {
        binFile.read(reinterpret_cast<char*>(&singleRecord), sizeof(acct_v3));
        appendRecord(records, singleRecord);
    }
    return records;
}
