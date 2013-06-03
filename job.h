#ifndef __JOB_H__
#define __JOB_H__

class Job
{
    public:
        enum class State {
            Running = 0,
            Moveable,
            NonMoveable
        };

        Job(int id);

        int get_id() const;
        bool moveable() const;

    private:
        int job_id;
        State state;
};

#endif /* __JOB_H__ */
