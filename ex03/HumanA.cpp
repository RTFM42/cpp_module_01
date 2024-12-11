#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : __name__(name), __weapon__(weapon)
{
	std::cout << "HumanA " << name << " created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->__name__ << " destroyed" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->__name__ << " attacks with their " << this->__weapon__.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->__weapon__ = weapon;
}
