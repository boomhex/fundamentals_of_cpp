#ifndef _ACCT_H_
#define _ACCT_H_


#include <cstdint>
#include <sys/acct.h>


struct acct_v3
{
    char            ac_flag;                /* Flags */
    char            ac_version;             /* Always set to ACCT_VERSION */
    uint16_t           ac_tty;                 /* Control Terminal */
    uint32_t           ac_exitcode;            /* Exitcode */
    uint32_t           ac_uid;                 /* Real User ID */
    uint32_t           ac_gid;                 /* Real Group ID */
    uint32_t           ac_pid;                 /* Process ID */
    uint32_t           ac_ppid;                /* Parent Process ID */
    uint32_t           ac_btime;               /* Process Creation Time */
    float           ac_etime;               /* Elapsed Time */
    comp_t          ac_utime;               /* User Time */
    comp_t          ac_stime;               /* System Time */
    comp_t          ac_mem;                 /* Average Memory Usage */
    comp_t          ac_io;                  /* Chars Transferred */
    comp_t          ac_rw;                  /* Blocks Read or Written */
    comp_t          ac_minflt;              /* Minor Pagefaults */
    comp_t          ac_majflt;              /* Major Pagefaults */
    comp_t          ac_swaps;               /* Number of Swaps */
    char            ac_comm[16];     /* Command Name */
};

#endif