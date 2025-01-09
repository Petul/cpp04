/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:46:09 by pleander          #+#    #+#             */
/*   Updated: 2025/01/09 13:51:19 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& d)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = d.type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this == &a)
	{
		return (*this);
	}
	this->type = a.type;
	return (*this);
}

void Dog::makeSound()
{
	std::cout << "Bark!" << std::endl;
}
