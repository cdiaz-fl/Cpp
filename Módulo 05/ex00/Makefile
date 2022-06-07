# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 11:11:39 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/04/06 11:21:57 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRCS = Bureaucrat.cpp		\
			 main.cpp					\

OBJS = $(SRCS:.cpp=.o)	\

INC = Bureaucrat.hpp		\

CC = clang++

FLAGS = -Wall -Werror -Wextra	\

all: $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CC) $(FLAGS) $(OBJS) -I. -o $(NAME)
	@echo "Compiled!"

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(NAME).dSYM

re: fclean all

.PHONY: all clean fclean re
