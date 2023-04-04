NAME = btc

SRCS = main.cpp							\
			 BitcoinExchange.cpp	\

OBJS = $(SRCS:.cpp=.o)

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -g3 #-fsanitize=address

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

