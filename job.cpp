#include <iostream>

#include "job.h"

Job::Job(int id)
    : job_id(id), state(State::Moveable)
{
    std::cout << "Created new job: " << id << std::endl;
}

int Job::get_id() const
{
    return job_id;
}

bool Job::moveable() const
{
    return state == State::Moveable;
}
