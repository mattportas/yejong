#ifndef __POOL_H__
#define __POOL_H__

#include <map>

#include "machine.h"
#include "job.h"

class Pool
{
    public:
        void add_machine(const Machine& new_machine);
        void add_job(const Job& new_job);

    private:
        std::map<std::string, Machine> machines;
        std::map<int, Job> jobs;
};

#endif /* __POOL_H__ */
