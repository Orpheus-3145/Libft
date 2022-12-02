# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: anonymous <anonymous@student.codam.nl>       +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/14 18:27:31 by anonymous     #+#    #+#                  #
#    Updated: 2022/12/02 23:46:12 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SHELL := /bin/bash

NAME := libft.a
SRC_DIR := sources/
OBJ_DIR := objects/
INCLUDE  := include/

SRCS := $(wildcard $(SRC_DIR)*.c)
OBJS := $(subst $(SRC_DIR), $(OBJ_DIR), $(SRCS:.c=.o))
HEADERS :=$(wildcard $(INCLUDE)*.h)

CC  := gcc
IFLAGS := -I $(INCLUDE)
CFLAGS  := -Wall -Wextra -Werror
LFLAGS  := -rcs

GREEN = \x1b[32;01m
RED = \x1b[31;01m
BLUE = \x1b[34;01m
RESET = \x1b[0m

all: $(NAME)
	@printf "$(GREEN)created archive $(NAME)$(RESET)\n"

$(NAME): $(OBJS) $(HEADERS)
	ar $(LFLAGS) $(NAME) $(OBJS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@printf "$(BLUE)"
	$(CC) $(CFLAGS) $(IFLAGS) -c $^ -o $@

clean:
	@printf "$(RED)"
	-rm -f $(OBJS)
	@printf "$(RESET)"

fclean: clean
	@printf "$(RED)"
	-rm -f $(NAME)
	@printf "$(RESET)"

re: fclean all

.PHONY: all clean fclean re

# compila: main.c $(NAME)
# 	gcc $(IFLAGS) main.c $(NAME) -o main.exe
# 
# run: main.exe
# 	.\main.exe
