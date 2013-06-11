#include <job.h>
#include "test.h"
#include "test-job.h"

bool Test::JobID::run()
{
    const int job_id = 1;
    Job j1(job_id, "test-machine1");

    if (j1.get_id() == job_id)
        return true;
    else
        return false;
}

bool Test::JobMachineName::run()
{
    const std::string machine_name("test-machine1");
    Job j1(1, machine_name);

    if (j1.get_machine() == machine_name)
        return true;
    else
        return false;
}

bool Test::JobDefaultState::run()
{
    Job j1(1, "test-machine1");

    if (j1.moveable())
        return true;
    else
        return false;
}
