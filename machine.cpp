#include <iostream>
#include <string>

#include "machine.h"

Machine::Machine(std::string machine_name)
{
    std::cout << "Creating machine: " << machine_name << std::endl;
    name = machine_name;
}

std::string Machine::get_name()
{
    return name;
}
