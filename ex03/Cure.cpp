/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:02:43 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 22:02:38 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

#include "AMateria.hpp"

Cure::Cure() : AMateria("Cure")
{
}
Cure::Cure(const Cure& o) : AMateria("Cure")
{
}
Cure::~Cure()
{
}
Cure& Cure::operator=(const Cure& o)
{
	return (*this);
}
Cure* Cure::clone() const
{
	return (new Cure());
}
void use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}
