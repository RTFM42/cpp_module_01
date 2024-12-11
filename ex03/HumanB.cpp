#include "HumanB.hpp"

HumanB::HumanB(std::string name) : __weapon__(NULL)
{
	this->__name__ = name;
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->__name__ << " destroyed" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->__name__ << " attacks with " << this->__weapon__->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->__weapon__ = &weapon;
}
