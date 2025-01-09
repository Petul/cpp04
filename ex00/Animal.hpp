/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:12:23 by pleander          #+#    #+#             */
/*   Updated: 2025/01/09 15:24:44 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
   public:
	Animal();
	Animal(const Animal& a);
	~Animal();
	Animal& operator=(const Animal& a);
	std::string getType();

   protected:
	std::string type;
};

#endif
