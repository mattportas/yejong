#include "test.h"

namespace Test {

class PoolAddMachine : public Test
{
    public:
        PoolAddMachine() : Test("Pool: Add machine") {}
        virtual bool run();
};

class PoolAddJob : public Test
{
    public:
        PoolAddJob() : Test("Pool: Add job") {}
        virtual bool run();
};

} // namespace Test
