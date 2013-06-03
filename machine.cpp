#include <iostream>
#include <string>

#include "machine.h"

Machine::Machine(const std::string& machine_name)
    : name(machine_name)
{
    std::cout << "Creating machine: " << machine_name << std::endl;
}

const std::string& Machine::get_name() const
{
    return name;
}
