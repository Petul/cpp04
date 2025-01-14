/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:54:59 by pleander          #+#    #+#             */
/*   Updated: 2025/01/14 10:02:01 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
   public:
	MateriaSource();
	MateriaSource(const MateriaSource& o);
	MateriaSource& operator=(const MateriaSource& o);
	~MateriaSource() override;

	void learnMateria(AMateria*) override;
	AMateria* createMateria(std::string const& type) override;

   private:
	AMateria* learned_materias_[4];
};

#endif
