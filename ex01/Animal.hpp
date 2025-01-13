/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:12:23 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 16:06:21 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#include "Brain.hpp"

class Animal
{
   public:
	Animal();
	Animal(const Animal& a);
	virtual ~Animal();
	Animal& operator=(const Animal& a);
	std::string getType() const;
	virtual void makeSound() const;

   protected:
	std::string type_;
};

#endif
