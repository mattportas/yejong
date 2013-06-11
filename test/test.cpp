#include "test.h"
#include "test-job.h"

#include <iostream>

int main()
{
    Test::TestSuite tests(std::cout);
    
    { // Job
        std::shared_ptr<Test::Test> jt1(new Test::JobID);
        tests.register_test(jt1);
        std::shared_ptr<Test::Test> jt2(new Test::JobMachineName);
        tests.register_test(jt2);
        std::shared_ptr<Test::Test> jt3(new Test::JobDefaultState);
        tests.register_test(jt3);
    }

    { // Machine 
    }

    { // Pool
    }

    bool all_ok = tests.run_all();
    if (all_ok)
        return 0;
    else
        return 1;
}
