NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Phonebook.cpp Contact.cpp
OBJS = main.o Phonebook.o Contact.o

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS) $(CFLAGS) -I.

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
