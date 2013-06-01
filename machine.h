#ifndef __MACHINE_H__
#define __MACHINE_H__

#include <string>

class machine
{
    std::string name;

  public:
    machine(std::string);
    std::string get_name();
};

#endif /* __MACHINE_H__ */
