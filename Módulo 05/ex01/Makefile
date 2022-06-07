# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 11:11:39 by cdiaz-fl          #+#    #+#              #
#    Updated: 2022/04/11 12:48:09 by cdiaz-fl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

SRCS = Bureaucrat.cpp		\
			 Form.cpp					\
			 main.cpp					\

OBJS = $(SRCS:.cpp=.o)	\

INC = Bureaucrat.hpp		\
			Form.hpp					\

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
