##
## Virgile AGNEL (Personal Project)
## One_Simple_Weather_info
## File description:
## Makefile
##

NAME	= weather

CC	= gcc

RM	= rm -f

SRCS	= $(wildcard src/*.c) \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -g -I ./include/ -L ./lib/my -lmy
LDFLAGS += -pipe -Wall -Wextra -Wshadow -Wuninitialized -Wformat-security -lcurl

all: $(NAME)

$(NAME): $(OBJS)
	make -C lib/my
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LDFLAGS)

tests_run:
	cd tests/ && $(MAKE)

clean:
	@$(RM) -f $(OBJ)
	@find -type f -name '*~' -delete
	@find -type f -name '#*#' -delete
	@find -type f -name '*.o' -delete
	@find -type f -name '*.gcda' -delete
	@find -type f -name '*.gcno' -delete
	@find -type f -name '*.a' -delete
	@$(RM) -r -f *~ \#*\#
	cd tests/ && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	$(RM) unit_tests
	cd tests/ && $(MAKE) fclean
re: fclean all

.PHONY:			all tests_run clean fclean re
