#include <iostream>
#include <string>

#include "machine.h"

machine::machine(std::string machine_name)
{
    std::cout << "Creating machine: " << machine_name << std::endl;
    name = machine_name;
}

std::string machine::get_name()
{
    return name;
}
