#include <iostream>
#include <string>

#include "job.h"

Job::Job(int id, const std::string& machine_name)
    : job_id(id), state(State::Moveable), machine(machine_name)
{
    std::cout << "Created new job: " << id << std::endl;
}

int Job::get_id() const
{
    return job_id;
}

const std::string& Job::get_machine() const
{
    return machine;
}

bool Job::moveable() const
{
    return state == State::Moveable;
}
