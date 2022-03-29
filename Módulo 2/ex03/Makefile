# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 17:47:26 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/24 10:22:05 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= bsd

SRCS	= main.cpp			\
				Fixed.cpp			\
				Point.cpp			\
				bsp.cpp			\

OBJS	= $(SRCS:.cpp=.o)

INC	= Fixed.hpp	\
			Point.hpp	\

CC	=	clang++

FLAGS	= -Wall -Wextra -Werror -fsanitize=address -g3

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
