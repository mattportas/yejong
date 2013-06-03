#include <iostream>

#include "job.h"

Job::Job(int id)
{
    std::cout << "Created new job: " << id << std::endl;
    job_id = id;
    state = MOVEABLE;
}

int Job::get_id()
{
    return job_id;
}

bool Job::moveable()
{
    if (state == MOVEABLE) {
        return true;
    } else {
        return false;
    }
}
