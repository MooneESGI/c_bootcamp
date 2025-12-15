CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11

NAME = c_16

SRCS = main.c my_strtok.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
