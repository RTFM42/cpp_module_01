#include "Weapon.hpp"

Weapon::Weapon(std::string type) : __type__(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void)
{
	return (this->__type__);
}

void Weapon::setType(std::string type)
{
	this->__type__ = type;
}
