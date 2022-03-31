# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 17:47:26 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/29 10:38:57 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

SRC = main.cpp				\
	ClapTrap.cpp				\
	ScavTrap.cpp				\
	FragTrap.cpp				\
	DiamondTrap.cpp				\

OBJ = $(SRC:.cpp=.o)

INCLUDE = ClapTrap.hpp	\
			ScavTrap.hpp			\
			FragTrap.hpp			\
			DiamondTrap.hpp			\

CC = clang++

FLAG =  -Wall -Wextra -Werror -Wshadow -Wno-shadow

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	$(CC) $(FLAG) $(OBJ) -I. -o $(NAME)
	@echo "Compiled!"

%.o : %.cpp
		$(CC) $(FLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
