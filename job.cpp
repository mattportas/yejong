#include <iostream>

#include "job.h"

job::job(int id)
{
    std::cout << "Created new job: " << id << std::endl;
    job_id = id;
}

int job::get_id()
{
    return job_id;
}
