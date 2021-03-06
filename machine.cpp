#include <iostream>
#include <memory>
#include <string>

#include "machine.h"

Machine::Machine(const std::string& machine_name)
    : name(machine_name)
{
    std::cout << "Creating machine: " << machine_name << std::endl;
}

const std::string& Machine::get_name() const
{
    return name;
}

void Machine::add_job(std::shared_ptr<Job> new_job)
{
    jobs.push_back(new_job);
}
