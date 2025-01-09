/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:51:31 by pleander          #+#    #+#             */
/*   Updated: 2025/01/09 13:51:45 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& d)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = d.type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this == &a)
	{
		return (*this);
	}
	this->type = a.type;
	return (*this);
}

void Cat::makeSound()
{
	std::cout << "Meow!" << std::endl;
}
