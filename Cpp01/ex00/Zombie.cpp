#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::set_name(std::string name) {
	this->name = name;
}

std::string Zombie::get_name() {
	return this->name;
}

Zombie::~Zombie() {
	std::cout << get_name() << " Destroyed" << std::endl;
}

