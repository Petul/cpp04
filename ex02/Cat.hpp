/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:50:06 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 16:06:49 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
   public:
	Cat();
	Cat(const Cat& d);
	Cat& operator=(const Cat& d);
	~Cat() override;
	void makeSound() const override;
	Brain* getBrain();

   private:
	Brain* brain_;
};

#endif
