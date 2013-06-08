#include <iostream>
#include <memory>

#include "pool.h"
#include "machine.h"
#include "job.h"

int main ()
{
    Pool machine_pool;

    machine_pool.add_machine(Machine("one"));
    machine_pool.add_machine(Machine("two"));

    std::shared_ptr<Job> job_one(new Job(1, "one"));
    std::shared_ptr<Job> job_two(new Job(2, "two"));

    machine_pool.add_job(job_one);
    machine_pool.add_job(job_two);

    return 0;
}
