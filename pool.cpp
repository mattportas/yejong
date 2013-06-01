#include <iostream>
#include <string>

#include "pool.h"

void pool::add_machine(machine new_machine)
{
    std::string machine_name = new_machine.get_name();

    std::cout << "Adding machine to pool: " << machine_name << std::endl;
    machines.insert(std::pair<std::string, machine>(machine_name, new_machine));
}

void pool::add_job(job new_job)
{
    int job_id = new_job.get_id();

    std::cout << "Adding job to pool: " << job_id << std::endl;
    jobs.insert(std::pair<int, job>(job_id, new_job));
}
