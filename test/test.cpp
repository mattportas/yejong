#include "test.h"
#include "test-job.h"
#include "test-machine.h"
#include "test-pool.h"

#include <iostream>
#include <memory>

int main()
{
    Test::TestSuite tests(std::cout);
    
    // Set up tests - class Job
    tests.register_test(std::make_shared<Test::JobID>());
    tests.register_test(std::make_shared<Test::JobMachineName>());
    tests.register_test(std::make_shared<Test::JobDefaultState>());

    // Set up tests - class Machine
    tests.register_test(std::make_shared<Test::MachineName>());
    tests.register_test(std::make_shared<Test::MachineAddJob>());

    // Set up tests - class Pool
    tests.register_test(std::make_shared<Test::PoolAddMachine>());
    tests.register_test(std::make_shared<Test::PoolAddJob>());
    
    // Run the tests
    bool all_ok = tests.run_all();
    if (all_ok)
        return 0;
    else
        return 1;
}
