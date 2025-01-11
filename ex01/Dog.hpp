/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:38:49 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 16:06:38 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
   public:
	Dog();
	Dog(const Dog& d);
	Dog& operator=(const Dog& d);
	~Dog() override;
	void makeSound() const override;

   private:
	Brain* brain_;
};

#endif
