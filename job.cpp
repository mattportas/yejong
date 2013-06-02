#include <iostream>

#include "job.h"

job::job(int id)
{
    std::cout << "Created new job: " << id << std::endl;
    job_id = id;
    state = MOVEABLE;
}

int job::get_id()
{
    return job_id;
}

bool job::moveable()
{
    if (state == MOVEABLE) {
        return true;
    } else {
        return false;
    }
}
