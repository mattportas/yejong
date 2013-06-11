CXX=clang++
CXXFLAGS=-O2 -Wall -Wextra -std=c++11 

OBJECTS:=$(patsubst %.cpp,%.o,$(wildcard *.cpp))

.PHONY: all clean test

all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o schedule $(OBJECTS)

clean:
	rm -f $(OBJECTS) schedule
	$(MAKE) -C test clean

test: all
	$(MAKE) -C test
