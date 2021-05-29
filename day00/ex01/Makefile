NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror -I./
SRCS = main.cpp Phonebook.cpp Contact.cpp
OBJS = main.o Phonebook.o Contact.o

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
