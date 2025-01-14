/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:41:24 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 13:05:04 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

#include "AMateria.hpp"

Character::Character(const std::string name) : name_{name}
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory_[i] = nullptr;
		this->floor_[i] = nullptr;
	}
}

Character::Character(const Character& o) : name_{o.name_}
{
	for (int i = 0; i < 4; i++)
	{
		this->floor_[i] = nullptr;
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
		delete this->floor_[i];
	}
}

std::string const& Character::getName() const
{
	return (this->name_);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		return;
	}
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
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory_[idx])
		{
			for (int i = 0; i < 4; i++)
			{
				if (!this->floor_[i])
				{
					this->floor_[i] = this->inventory_[idx];
					this->inventory_[idx] = nullptr;
					return;
				}
			}
			std::cout << "Error: Cannot discard materia, floor is full"
			          << std::endl;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory_[idx])
		{
			this->inventory_[idx]->use(target);
		}
	}
}
