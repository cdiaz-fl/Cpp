# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 09:19:47 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/31 12:25:45 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

SRCS = AMateria.cpp					\
			 MateriaSource.cpp		\
			 Character.cpp				\
			 Ice.cpp							\
			 Cure.cpp							\
			 main.cpp							\

OBJS = $(SRCS:.cpp=.o)

INC = AMateria.hpp					\
			IMateriaSource.hpp		\
			MateriaSource.hpp			\
			ICharacter.hpp				\
			Character.hpp					\
			Cure.hpp							\
			Ice.hpp								\

CC = clang++

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME)	:	$(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -I. -o $(NAME)
	@echo "Compiled!"

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<  -o $@

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
