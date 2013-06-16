#include <job.h>
#include <machine.h>
#include <pool.h>
#include "test.h"
#include "test-pool.h"

bool Test::PoolAddMachine::run()
{
    try {
        Pool p1;
        p1.add_machine(std::make_shared<Machine>("test-machine1"));
        return true;
    }
    catch (...) {
        return false;
    }
}

bool Test::PoolAddJob::run()
{
    try {
        const std::string mname = "test-machine1";
        Pool p1;
        p1.add_machine(std::make_shared<Machine>(mname));
        p1.add_job(std::make_shared<Job>(1, mname));
        return true;
    }
    catch (...) {
        return false;
    }
}
