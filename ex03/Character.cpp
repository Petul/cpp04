/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:41:24 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 22:27:15 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include "AMateria.hpp"

Character::Character(const std::string name) : name_{name}
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory_[i] = nullptr;
	}
}

Character::Character(const Character& o) : name_{o.name_}
{
	for (int i = 0; i < 4; i++)
	{
		if (o.inventory_[i])
		{
			this->inventory_[i] = o.inventory_[i]->clone();
		}
		else
		{
			this->inventory_[i] = nullptr;
		}
	}
}
Character& Character::operator=(const Character& o)
{
	if (this == &o)
	{
		return (*this);
	}
	this->name_ = o.name_;
	for (int i = 0; i < 4; i++)
	{
		delete this->inventory_[i];
		if (o.inventory_[i])
		{
			this->inventory_[i] = o.inventory_[i]->clone();
		}
		else
		{
			this->inventory_[i] = nullptr;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->inventory_[i];
	}
}

std::string const& Character::getName() const
{
	return (this->name_);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory_[i])
		{
			this->inventory_[i] = m;
			return;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx > 0 && idx < 4)
	{
		this->inventory_[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory_[idx])
	{
		this->inventory_[idx]->use(target);
	}
}
