# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 10:24:13 by pleander          #+#    #+#              #
#    Updated: 2025/01/14 13:12:47 by pleander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Interface
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++11
SOURCES := AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp main.cpp MateriaSource.cpp

OBJECTS := $(SOURCES:.cpp=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
		$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
		rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
		rm -f $(NAME)

.PHONY: re
re: fclean all
