#include <iostream>
#include <memory>

#include "pool.h"
#include "machine.h"
#include "job.h"

int main ()
{
    Pool machine_pool;

    std::shared_ptr<Machine> machine_one(new Machine("one"));
    std::shared_ptr<Machine> machine_two(new Machine("two"));

    machine_pool.add_machine(machine_one);
    machine_pool.add_machine(machine_two);

    std::shared_ptr<Job> job_one(new Job(1, "one"));
    std::shared_ptr<Job> job_two(new Job(2, "two"));

    machine_pool.add_job(job_one);
    machine_pool.add_job(job_two);

    return 0;
}
