NAME = replace
CC = clang++
CFLAGS = -Wall -Wextra -Werror -I./
SRCS = main.cpp
OBJS = main.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
