
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void set_name(std::string name);
	std::string get_name();
	void announce();
};

#endif //ZOMBIE_HPP
