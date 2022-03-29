# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 17:47:26 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/03/22 07:05:19 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= fixed

SRCS	= main.cpp			\
				Fixed.cpp			\

OBJS	= $(SRCS:.cpp=.o)

INC	= Fixed.hpp	\

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
