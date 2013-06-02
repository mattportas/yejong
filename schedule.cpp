#include <iostream>

#include "pool.h"
#include "machine.h"
#include "job.h"

int main ()
{
    pool machine_pool;
    machine first_machine("one");
    machine second_machine("two");
    job first_job(1);
    job second_job(2);

    machine_pool.add_machine(first_machine);
    machine_pool.add_machine(second_machine);

    machine_pool.add_job(first_job);
    machine_pool.add_job(second_job);

    std::cout << "Job 1 moveable: " << first_job.moveable() << std::endl;

    return 0;
}
