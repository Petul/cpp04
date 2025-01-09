/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:12:21 by pleander          #+#    #+#             */
/*   Updated: 2025/01/09 13:37:16 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal() : type{"None"}
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& a) : type{a.type}
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
	this->type = a.type;
	return (*this);
}
