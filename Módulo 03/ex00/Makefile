# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 17:47:26 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/29 09:38:56 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= ClapTrap

SRCS	= main.cpp			\
				ClapTrap.cpp	\

OBJS	= $(SRCS:.cpp=.o)

INC	= ClapTrap.hpp	\

CC	=	clang++

FLAGS	= -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -I. -o $(NAME)
	@echo "Compiled!"

%.o	:	%.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
