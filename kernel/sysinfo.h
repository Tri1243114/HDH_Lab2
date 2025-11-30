#ifndef XV6_SYSINFO_H
#define XV6_SYSINFO_H

#include "types.h"

struct sysinfo {
  uint64 freemem;
  uint64 nproc;
  uint64 loadavg; 
};

uint64 freemem(void);
uint64 nproc_count(void);
uint64 loadavg(void);

#endif