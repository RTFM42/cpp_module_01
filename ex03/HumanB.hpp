#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string __name__;
	Weapon *__weapon__;

public:
	HumanB(std::string name);
	~HumanB(void);
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif
