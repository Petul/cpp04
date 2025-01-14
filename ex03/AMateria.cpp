/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:59:47 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 11:29:40 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : type_{type}
{
}

AMateria::AMateria(const AMateria& o) : type_{o.type_}
{
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria& o)
{
	// subject: While assigning a Materia to another, copying the type doesn’t
	// make sense
	(void)o;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (this->type_);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
