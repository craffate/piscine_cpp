NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = megaphone.o

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
