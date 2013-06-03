#ifndef __JOB_H__
#define __JOB_H__

#include <string>

class Job
{
    public:
        enum class State {
            Running = 0,
            Moveable,
            NonMoveable
        };

        Job(int id, std::string machine_name);

        int get_id() const;
        const std::string& get_machine() const;
        bool moveable() const;

    private:
        int job_id;
        std::string machine;
        State state;
};

#endif /* __JOB_H__ */
