NAME = replace
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
OBJS = main.o

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS) -I./

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
