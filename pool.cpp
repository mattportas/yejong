#include <iostream>
#include <string>

#include "pool.h"

void Pool::add_machine(Machine new_machine)
{
    std::string machine_name = new_machine.get_name();

    std::cout << "Adding machine to pool: " << machine_name << std::endl;
    machines.insert(std::pair<std::string, Machine>(machine_name, new_machine));
}

void Pool::add_job(Job new_job)
{
    int job_id = new_job.get_id();

    std::cout << "Adding job to pool: " << job_id << std::endl;
    jobs.insert(std::pair<int, Job>(job_id, new_job));
}
