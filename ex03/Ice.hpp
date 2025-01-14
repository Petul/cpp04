/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:54:41 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 11:25:11 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
   public:
	Ice();
	Ice(const Ice& o);
	Ice& operator=(const Ice& o);
	~Ice();
	std::string const& getType() const;  // Returns the materia type
	Ice* clone() const override;
	void use(ICharacter& target) override;
};
#endif
