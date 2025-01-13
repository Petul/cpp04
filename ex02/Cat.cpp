/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:51:31 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 16:09:36 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called." << std::endl;
	this->type_ = "Cat";
	this->brain_ = new Brain();
}

Cat::Cat(const Cat& d) : Animal(d)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->type_ = d.type_;
	this->brain_ = new Brain(*d.brain_);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain_;
}

Cat& Cat::operator=(const Cat& a)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this == &a)
	{
		return (*this);
	}
	this->type_ = a.type_;
	delete this->brain_;
	this->brain_ = new Brain(*a.brain_);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain()
{
	return (this->brain_);
}
