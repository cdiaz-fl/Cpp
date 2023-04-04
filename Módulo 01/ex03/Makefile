# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 17:47:26 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/15 11:13:24 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= violence

SRCS	= main.cpp			\
				Weapon.cpp		\
				HumanA.cpp		\
				HumanB.cpp		\

OBJS	= $(SRCS:.cpp=.o)

INC	= Weapon.hpp		\
			HumanA.hpp		\
			HumanB.hpp		\

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
