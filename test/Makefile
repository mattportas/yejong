OBJ_DEPENDENCIES := ../job.o ../machine.o
TEST_OBJECTS := $(patsubst %.cpp,%.o,$(wildcard test-*.cpp))
TEST_MAIN_OBJECT := test.o testsuite.o

CXX=clang++
CXXFLAGS=-std=c++11 -Wall -Wextra -I..

.PHONY: all test clean

all: test

test: $(TEST_OBJECTS) $(TEST_MAIN_OBJECT) $(OBJ_DEPENDENCIES)
	$(CXX) $(CXXFLAGS) -o $@ $^
	./test

clean:
	rm -f $(TEST_OBJECTS) $(TEST_MAIN_OBJECT) test
