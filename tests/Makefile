##
## EPITECH PROJECT, 2019
## C POOL ~ Libmy
## File description:
## Makefile
##

NAME	= unit_tests

SRC = $(wildcard ./../src/*.c)

SRC_UT	= $(wildcard ./*.c)

OBJS	= $(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS = -pipe -Wall -Wextra -Wshadow -Wuninitialized -Wformat-security
LDFLAGS += -lcriterion -lgcov

all: $(NAME) run

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

run:		$(NAME)
		./unit_tests

clean:
	rm -rf $(OBJS)
	rm -rf gc*

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:			all run clean fclean re
