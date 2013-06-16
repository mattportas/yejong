#ifndef __TEST_H__
#define __TEST_H__

#include <iosfwd> // for std::ostream&
#include <memory>
#include <string>
#include <vector>

namespace Test {

class Test {
    // Interface to tests
    // (Abstract class)
    public:
        Test(const std::string& name)
            : testname(name) {}
        virtual const std::string& name(); // return test name
        virtual bool pre() {return true;} // Runs before a test
        virtual bool run() = 0; // Runs if pre() returns true
        virtual bool post() {return true;} // Runs if pre() returns true (even if run() returns false)
        virtual ~Test() { }; // empty virtual destructor
    private:
        std::string testname;
};

class TestSuite {
    public:
        TestSuite(std::ostream& output_stream)
            : output(output_stream) {}

        void register_test(std::shared_ptr<Test> test)
            { tests.push_back(test); }

        bool run_all();
    private:
        std::ostream& output;
        std::vector<std::shared_ptr<Test>> tests;
        unsigned long not_run;
        unsigned long passed;
        unsigned long failed;
};

} // namespace Test

#endif
