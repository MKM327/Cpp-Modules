#include "Cure.hpp"

Cure::Cure() :AMateria("cure"){
	std::cout << "Cure Materia is Created !" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure Materia is Destructed !" << std::endl;

}

AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "heals " << target.getName() << " Wounds" << std::endl;
}

Cure::Cure(const Cure &cpy){
    *this = cpy;
}

Cure &Cure::operator=(const Cure &cpy) {
    if(this == &cpy)
        return  *this;
    *this = cpy;
    return *this;
}

