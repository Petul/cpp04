/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:02:13 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 22:02:24 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>

#include "AMateria.hpp"

class Cure : public AMateria
{
   public:
	Cure();
	Cure(const Cure& o);
	Cure& operator=(const Cure& o);
	~Cure();
	std::string const& getType() const;  // Returns the materia type
	virtual Cure* clone() const override;
	virtual void use(ICharacter& target) override;
};
#endif
