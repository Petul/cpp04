/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:12:21 by pleander          #+#    #+#             */
/*   Updated: 2025/01/09 15:25:36 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type_{"None"}
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) : type_{a.type_}
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	if (this == &a)
	{
		return (*this);
	}
	this->type_ = a.type_;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type_);
}

void WrongAnimal::makeSound() const
{
	std::cout << "???" << std::endl;
}
