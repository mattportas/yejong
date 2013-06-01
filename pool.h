#ifndef __POOL_H__
#define __POOL_H__

#include <map>

#include "machine.h"
#include "job.h"

class pool
{
    std::map<std::string, machine> machines;
    std::map<int, job> jobs;

  public:
    void add_machine(machine);
    void add_job(job);
};

#endif /* __POOL_H__ */
