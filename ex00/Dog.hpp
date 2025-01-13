/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:38:49 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 09:29:03 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
   public:
	Dog();
	Dog(const Dog& d);
	Dog& operator=(const Dog& d);
	~Dog() override;
	void makeSound() const override;
};

#endif
