#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class	Zombie
{
	public:
		Zombie() : name("default") {}
		Zombie( std::string name) : name(name) {}
		~Zombie()
		{
			std::cout << name << " is destroyed" << std::endl;
		}
		void	announce(void);
		Zombie*	zombieHorde(int N, std::string name);
		void	set_name(std::string name)
		{
			this->name = name;
		}
	private:
		std::string name;
};

#endif