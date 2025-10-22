#include "pacctfile.ih"

string PacctFile::records()     const
{
    ifstream binFile(d_path, ios::binary);
    if (not binFile) {      // Opening failed
        cerr << "Cannot open: " << d_path << '\n';
        return {};
    }
    string records{};
    acct_v3 singleRecord;
    while (binFile)     // Loop records until EOF
    {                                                   // Read new record
        binFile.read(reinterpret_cast<char*>(&singleRecord), sizeof(acct_v3));
        appendRecord(records, singleRecord);
    }
    return records;
}
