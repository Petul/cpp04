/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:57:18 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 13:14:57 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->learned_materias_[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource& o)
{
	for (int i = 0; i < 4; i++)
	{
		if (o.learned_materias_[i])
		{
			this->learned_materias_[i] = o.learned_materias_[i]->clone();
		}
		else
		{
			this->learned_materias_[i] = nullptr;
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& o)
{
	if (this == &o)
	{
		return (*this);
	}
	for (int i = 0; i < 4; i++)
	{
		delete this->learned_materias_[i];
		this->learned_materias_[i] = o.learned_materias_[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->learned_materias_[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!learned_materias_[i])
		{
			learned_materias_[i] = m;
			return;
		}
	}
	delete m;  // if inventory is full, delete m to prevent leak
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learned_materias_[i] && learned_materias_[i]->getType() == type)
		{
			return (learned_materias_[i]->clone());
		}
	}
	return 0;
}
