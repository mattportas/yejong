#include "test.h"

namespace Test {

class JobID : public Test
{
    public:
        JobID() : Test("Job: ID") {}
        virtual bool run();
};

class JobMachineName : public Test
{
    public:
        JobMachineName() : Test("Job: Machine name") {}
        virtual bool run();
};

class JobDefaultState : public Test
{
    public:
        JobDefaultState() : Test("Job: Default state = Moveable") {}
        virtual bool run();
};

} // namespace Test

