#ifndef __MACHINE_H__
#define __MACHINE_H__

#include <string>

class Machine
{
    std::string name;

  public:
    Machine(std::string);
    std::string get_name();
};

#endif /* __MACHINE_H__ */
