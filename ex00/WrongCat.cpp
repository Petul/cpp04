
#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& d) : WrongAnimal(d)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	this->type_ = d.type_;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	if (this == &a)
	{
		return (*this);
	}
	this->type_ = a.type_;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
