#include "test.h"

#include <iostream>
#include <memory>
#include <string>
#include <vector>

const std::string& Test::Test::name()
{
    // Implement a virtual function outside of the header
    // to ensure generation of vtable
    return testname;
}

bool Test::TestSuite::run_all()
{
    // Run each test in turn
    // and report its status
    // return true only if all succeed
    passed = failed = not_run = 0;
    bool all_succeeded = true;
    for(auto& test : tests)
    {
        bool pre{false}, run{false}, post{false};
        pre = test->pre();
        if (pre)
        {
            run = test->run();
            post = test->post();
        }
        all_succeeded = all_succeeded && run;
        
        // Reporting
        output << "[" << test->name() << "] ";
        if (! pre)
        {
            ++not_run;
            output << "NOT RUN";
        }
        else if (run)
        {
            ++passed;
            output << "PASSED";
        }
        else
        {
            ++failed;
            output << "FAILED";
        }
        output << "\n";
    }

    // Summarise the status of all tests
    auto num_tests = tests.size();
    output << "\nPASSED: " << passed << "/" << num_tests << "\n";
    output << "FAILED: " << failed << "/" << num_tests << "\n";
    output << "NOT RUN: " << not_run << "/" << num_tests << "\n";
    
    return all_succeeded;
}
