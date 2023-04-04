# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 09:19:47 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/30 10:09:24 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism 

SRCS = main.cpp						\
			 Animal.cpp					\
			 Dog.cpp						\
			 Cat.cpp						\
			 WrongAnimal.cpp		\
			 WrongCat.cpp				\

OBJS = $(SRCS:.cpp=.o)

INC = Animal.hpp				\
			Dog.hpp						\
			Cat.hpp						\
			WrongAnimal.hpp		\
			WrongCat.hpp			\

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
