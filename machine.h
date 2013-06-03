#ifndef __MACHINE_H__
#define __MACHINE_H__

#include <string>

class Machine
{
    public:
        Machine(const std::string& machine_name);
        const std::string& get_name() const;
    private:
        std::string name;
};

#endif /* __MACHINE_H__ */
