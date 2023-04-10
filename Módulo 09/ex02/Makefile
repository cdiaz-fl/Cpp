NAME = PmergeMe

SRCS = main.cpp\

OBJS = $(SRCS:.cpp=.o)

CC = c++

FLAGS = -Wall -Werror -Wextra -g -std=c++98 -pedantic #-fsanitize=address

all:	$(NAME)

$(NAME):	$(OBJS)
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


