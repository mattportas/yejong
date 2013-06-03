#ifndef __POOL_H__
#define __POOL_H__

#include <map>

#include "machine.h"
#include "job.h"

class Pool
{
    std::map<std::string, Machine> machines;
    std::map<int, Job> jobs;

  public:
    void add_machine(Machine);
    void add_job(Job);
};

#endif /* __POOL_H__ */
