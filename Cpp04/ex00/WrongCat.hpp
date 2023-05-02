#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
		WrongCat();
		WrongCat(Cat &copy);
		~WrongCat();
        WrongCat &operator=(const WrongCat &c);
	void makeSound() const;
};


#endif //WRONGCAT_HPP
