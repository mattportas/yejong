#include <memory>

#include <machine.h>
#include <job.h>
#include "test.h"
#include "test-machine.h"

bool Test::MachineName::run()
{
    const std::string machine_name = "test-machine1";
    Machine m1(machine_name);
    if (m1.get_name() == machine_name)
        return true;
    else
        return false;
}

bool Test::MachineAddJob::run()
{
    try {
        const std::string mname = "test-machine1";
        Machine m1(mname);
        std::shared_ptr<Job> j1(new Job(1, mname));
        m1.add_job(j1);
        return true;
    }
    catch (...) {
        return false;
    }
}
