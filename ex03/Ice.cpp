/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:56:34 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 12:01:23 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
}
Ice::Ice(const Ice& o) : AMateria("ice")
{
	(void)o;
}
Ice::~Ice()
{
}
Ice& Ice::operator=(const Ice& o)
{
	(void)o;
	return (*this);
}
Ice* Ice::clone() const
{
	return (new Ice());
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
	          << std::endl;
}
