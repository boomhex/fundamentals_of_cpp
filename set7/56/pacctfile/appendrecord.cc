#include "pacctfile.ih"

void PacctFile::appendRecord(string &records, acct_v3 const &record)    const
{
    uint32_t returnCode;
    returnCode = record.ac_exitcode;

    if (returnCode == 0 and not d_showAll)  // Succesful process
        return;

                                            // add processname to record
    records += "'" + commToString(record.ac_comm) + "' ";

    switch (returnCode)                     // add exitcode to record
    {
        case SIGKILL:
            records += "KILL";
        break;
        case SIGTERM:
            records += "TERM";
        break;
        default:
            records += to_string(returnCode);
    }

    records += '\n';
}
