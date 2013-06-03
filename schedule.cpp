#include <iostream>

#include "pool.h"
#include "machine.h"
#include "job.h"

int main ()
{
    Pool machine_pool;
    Job first_job(1);

    machine_pool.add_machine(Machine("one"));
    machine_pool.add_machine(Machine("two"));

    machine_pool.add_job(first_job);
    machine_pool.add_job(Job(2));

    std::cout << "Job 1 moveable: " << first_job.moveable() << std::endl;

    return 0;
}
