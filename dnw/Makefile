# Variables

NAME = play

CC = gcc

CFLAGS = -Wall -Werror -Wextra -Iinc

SRCDIR = src

INCDIR = inc


SRC = $(wildcard $(SRCDIR)/*.c)

OBJ = $(patsubst $(SRCDIR)/%.c, $(SRCDIR)/%.o, $(SRC))

#RULES
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<
# Phony rules

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re


