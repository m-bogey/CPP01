#include "Zombie.hpp"
# include <cstdio>
Zombie*	zombieHorde(int N, std::string name);

int	main()
{
	Zombie *test;
	
	test = zombieHorde(3, "Nathan");
	delete[] test;

	return (0);
}