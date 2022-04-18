
NAME = convert

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm %.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean re
