#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->__name__ = name;
	std::cout << "Zombie " << this->__name__ << " created" << std::endl;
}

Zombie::Zombie(void)
{
	this->__name__ = "default";
	std::cout << "Zombie " << this->__name__ << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->__name__ << " destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->__name__ << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->__name__ = name;
}
