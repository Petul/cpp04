/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:02:43 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 12:01:04 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
}
Cure::Cure(const Cure& o) : AMateria("cure")
{
	(void)o;
}
Cure::~Cure()
{
}
Cure& Cure::operator=(const Cure& o)
{
	(void)o;
	return (*this);
}
Cure* Cure::clone() const
{
	return (new Cure());
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
