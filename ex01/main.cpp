#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	int size;

	size = 100;
	Zombie *horde = zombieHorde(size, "Zombie");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
