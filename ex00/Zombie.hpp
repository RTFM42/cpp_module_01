#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {
public:
	std::string	name;
	void		announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

#endif
