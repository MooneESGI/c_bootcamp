CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -g

NAME = c_09
SRCS = main.c my_strstr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
