# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 17:47:26 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/15 09:48:01 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= zombie_horde

SRCS	= Zombie.cpp			\
				main.cpp				\
				ZombieHorde.cpp		\

OBJS	= $(SRCS:.cpp=.o)

INC	= Zombie.hpp;

CC	=	clang++

FLAGS	= -Wall -Wextra -Werror

all	:	$(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -I. -o $(NAME)

%.o	:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
