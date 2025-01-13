/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:43:17 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 15:56:19 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& b)
{
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas_[i] = b.ideas_[i];
	}
}

Brain& Brain::operator=(const Brain& b)
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	if (this == &b)
	{
		return (*this);
	}
	for (int i = 0; i < 100; i++)
	{
		this->ideas_[i] = b.ideas_[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

void Brain::addIdea(int index, std::string idea)
{
	if (index < 0 || index > 99)
	{
		return;
	}
	this->ideas_[index] = idea;
}

void Brain::showIdea(int index)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Error: invalid index." << std::endl;
		return;
	}
	std::cout << this->ideas_[index] << std::endl;
	return;
}
