#include "test.h"

namespace Test {

class MachineName : public Test
{
    public:
        MachineName() : Test("Machine: name") {}
        virtual bool run();
};

class MachineAddJob : public Test
{
    public:
        MachineAddJob() : Test("Machine: add Job") {}
        virtual bool run();
};

} // namespace Test
