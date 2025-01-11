/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:43:06 by pleander          #+#    #+#             */
/*   Updated: 2025/01/11 15:56:13 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
   public:
	Brain();
	Brain(const Brain &);
	Brain &operator=(const Brain &);
	~Brain();
	void addIdea(int index, std::string idea);
	void showIdea(int index);

   private:
	std::string ideas_[100];
};

#endif
