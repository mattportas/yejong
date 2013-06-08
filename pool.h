#ifndef __POOL_H__
#define __POOL_H__

#include <map>
#include <memory>

#include "machine.h"
#include "job.h"

class Pool
{
    public:
        void add_machine(std::shared_ptr<Machine> new_machine);
        void add_job(std::shared_ptr<Job> new_job);

    private:
        std::map<std::string, std::shared_ptr<Machine>> machines;
        std::map<int, std::shared_ptr<Job>> jobs;
};

#endif /* __POOL_H__ */
