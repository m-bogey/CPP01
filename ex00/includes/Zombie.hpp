#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name) : name(name) {}
        ~Zombie()
        {
            std::cout << name << " is destroyed" << std::endl;
        }
        void    announce(void);
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
};

#endif