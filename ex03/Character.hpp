/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:16:21 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 11:26:10 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
   public:
	Character(const std::string name);
	Character(const Character&);
	Character& operator=(const Character&);
	~Character();
	std::string const& getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;

   private:
	std::string name_;
	AMateria* inventory_[4];
	AMateria* floor_[4];
};
#endif
