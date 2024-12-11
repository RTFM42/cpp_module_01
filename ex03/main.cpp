#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon weapon = Weapon("pistol");
		HumanA bob("Bob", weapon);
		bob.attack();
		weapon.setType("shotgun");
		bob.attack();
	}
	{
		Weapon weapon = Weapon("gun");
		HumanB jim("Jim");
		jim.setWeapon(weapon);
		jim.attack();
		weapon.setType("knife");
		jim.attack();
	}
}
