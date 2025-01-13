/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:56:34 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 22:02:52 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

#include "AMateria.hpp"

Ice::Ice() : AMateria("Ice")
{
}
Ice::Ice(const Ice& o) : AMateria("Ice")
{
}
Ice::~Ice()
{
}
Ice& Ice::operator=(const Ice& o)
{
	return (*this);
}
Ice* Ice::clone() const
{
	return (new Ice());
}
void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
