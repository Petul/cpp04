/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:12:21 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 09:17:27 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal() : type_{"None"}
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& a) : type_{a.type_}
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this == &a)
	{
		return (*this);
	}
	this->type_ = a.type_;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type_);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
