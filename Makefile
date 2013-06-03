CXX=clang++
CXXFLAGS=-O2 -Wall -Wextra -std=c++11 

OBJECTS:=$(patsubst %.cpp,%.o,$(wildcard *.cpp))

all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o schedule $(OBJECTS)

clean:
	rm -f $(OBJECTS) schedule
