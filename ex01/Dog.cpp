/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:46:09 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 16:08:20 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called." << std::endl;
	this->type_ = "Dog";
	this->brain_ = new Brain();
}

Dog::Dog(const Dog& d) : Animal(d)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->type_ = d.type_;
	this->brain_ = new Brain(*d.brain_);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain_;
}

Dog& Dog::operator=(const Dog& a)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this == &a)
	{
		return (*this);
	}
	this->type_ = a.type_;
	delete this->brain_;
	this->brain_ = new Brain(*a.brain_);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}
