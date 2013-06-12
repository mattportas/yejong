#include <iostream>
#include <memory>

#include "pool.h"
#include "machine.h"
#include "job.h"

int main ()
{
    Pool machine_pool;

    auto machine_one = std::make_shared<Machine>("one");
    auto machine_two = std::make_shared<Machine>("two");

    machine_pool.add_machine(machine_one);
    machine_pool.add_machine(machine_two);

    auto job_one = std::make_shared<Job>(1, "one");
    auto job_two = std::make_shared<Job>(2, "two");

    machine_pool.add_job(job_one);
    machine_pool.add_job(job_two);

    return 0;
}
