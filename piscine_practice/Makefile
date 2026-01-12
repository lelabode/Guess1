CC      = cc
CFLAGS  = -Wall -Wextra -Werror -Iinclude

NAME    = build/piscine_test

SRC     = src/main.c src/ft_split.c src/ft_strdup.c
OBJ     = $(SRC:src/%.c=build/%.o)

all: $(NAME)

build:
	mkdir -p build

build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f build/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all build clean fclean re
