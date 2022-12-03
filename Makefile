# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: anonymous <anonymous@student.codam.nl>       +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/14 18:27:31 by anonymous     #+#    #+#                  #
#    Updated: 2022/12/03 02:11:46 by anonymous     ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SHELL := /bin/bash

NAME := libft.a
MAIN := main
SRC_DIR := sources/
OBJ_DIR := objects/
INCLUDE  := include/

SRCS := $(wildcard $(SRC_DIR)*.c)
OBJS := $(subst $(SRC_DIR), $(OBJ_DIR), $(SRCS:.c=.o))
HEADER :=$(wildcard $(INCLUDE)*.h)

CC  := gcc
IFLAGS := -I $(INCLUDE)
CFLAGS  := -Wall -Wextra -Werror
LFLAGS  := -rcs

GREEN = \x1b[32;01m
RED = \x1b[31;01m
BLUE = \x1b[34;01m
RESET = \x1b[0m

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS) $(HEADER)
	@ar $(LFLAGS) $(NAME) $(OBJS)
	@printf "$(GREEN)created archive $(NAME)$(RESET)\n"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
	
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(IFLAGS) -c $^ -o $@
	@printf "$(BLUE)Created object file $@\n"
	
clean:
	@-rm -f $(OBJS)
	@printf "$(RED)Removing files $(OBJS)$(RESET)\n"

fclean: clean
	@-rm -f $(NAME) $(MAIN).x
	@printf "$(RED)Removing $(NAME) and $(MAIN).x (if present)$(RESET)\n"

re: fclean all

compile: $(NAME)
	@$(CC) $(CFLAGS) $(IFLAGS) $(MAIN).c $(NAME) -o $(MAIN).x
	@printf "$(GREEN)created executable $(MAIN).x$(RESET)\n"

.PHONY: all clean fclean re compile