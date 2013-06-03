#ifndef __JOB_H__
#define __JOB_H__

enum {
    RUNNING = 0,
    MOVEABLE,
    NON_MOVEABLE
};

class Job
{
    int job_id;
    int state;

  public:
    Job(int);
    int get_id();
    bool moveable();
};

#endif /* __JOB_H__ */
