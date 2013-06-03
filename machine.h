#ifndef __MACHINE_H__
#define __MACHINE_H__

#include <string>
#include <vector>

#include "job.h"

class Machine
{
    public:
        Machine(const std::string& machine_name);
        const std::string& get_name() const;
        void add_job(Job);
    private:
        std::string name;
        std::vector<Job> jobs;
};

#endif /* __MACHINE_H__ */
