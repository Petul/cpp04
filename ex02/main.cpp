/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:20:00 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 16:05:19 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "\nTest memory allocation and deletion" << std::endl;
	int n{5};
	Animal* arr[n];

	for (int i = 0; i < n / 2; i++)
	{
		arr[i] = new Dog();
	}
	for (int i = n / 2; i < n; i++)
	{
		arr[i] = new Cat();
	}
	for (int i = 0; i < n; i++)
	{
		delete arr[i];
	}

	std::cout << "\nTest deep copies" << std::endl;
	Dog dog1;
	dog1.getBrain()->addIdea(0, "Dig holes in the ground");
	dog1.getBrain()->addIdea(1, "Sleep on the couch");
	Dog dog2{dog1};

	dog1.getBrain()->showIdea(0);
	dog1.getBrain()->showIdea(1);
	dog2.getBrain()->showIdea(0);
	dog2.getBrain()->showIdea(1);

	dog1.getBrain()->addIdea(0, "Chase squirrels");
	dog1.getBrain()->addIdea(1, "Bark at neighbor");

	dog1.getBrain()->showIdea(0);
	dog1.getBrain()->showIdea(1);
	dog2.getBrain()->showIdea(0);
	dog2.getBrain()->showIdea(1);

	// Does not work, Animal is an abstract class
	// Animal meta;
}
