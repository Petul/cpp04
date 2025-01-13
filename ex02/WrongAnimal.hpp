/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:14:12 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 09:19:07 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
   public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& a);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& a);
	std::string getType() const;
	void makeSound() const;

   protected:
	std::string type_;
};

#endif
