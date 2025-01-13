/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:58:19 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 21:59:58 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

#include "ICharacter.hpp"

class AMateria
{
   protected:
	const std::string type_;

   public:
	AMateria(std::string const& type);
	AMateria(const AMateria& o);
	virtual ~AMateria();
	AMateria& operator=(const AMateria& o);
	std::string const& getType() const;  // Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
