#include <iostream>
#include <string>
#include <utility>

#include "pool.h"

void Pool::add_machine(const Machine& new_machine)
{
    const std::string& machine_name = new_machine.get_name();

    std::cout << "Adding machine to pool: " << machine_name << std::endl;
    machines.insert(std::make_pair(machine_name, new_machine));
}

void Pool::add_job(const Job& new_job)
{
    const int job_id = new_job.get_id();
    const std::string& machine_name = new_job.get_machine();

    std::cout << "Adding job to pool: " << job_id << " (" << machine_name << ")" << std::endl;
    jobs.insert(std::make_pair(job_id, new_job));

    auto iter = machines.find(machine_name);
    if (iter != machines.end()) {
        std::cout << "Adding job to machine: " << machine_name << std::endl;
        iter->second.add_job(new_job);
    }
}
