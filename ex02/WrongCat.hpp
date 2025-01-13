/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:15:54 by pleander          #+#    #+#             */
/*   Updated: 2025/01/13 09:19:25 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
   public:
	WrongCat();
	WrongCat(const WrongCat& d);
	WrongCat& operator=(const WrongCat& d);
	~WrongCat() override;
	void makeSound() const;
};

#endif
