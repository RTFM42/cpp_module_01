#include "Zombie.hpp"

int	main()
{
	Zombie	zombie1("Foo");
	Zombie*	zombie2 = newZombie("FooFoo");

	zombie1.announce();
	zombie2->announce();
	randomChump("FooFooFoo");
	delete zombie2;
}
