# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fra <fra@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 18:27:31 by anonymous         #+#    #+#              #
#    Updated: 2023/01/19 20:27:01 by fra              ###   ########.fr        #
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
YELLOW = \x1b[33;01m

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS) $(HEADER)
	@ar $(LFLAGS) $(NAME) $(OBJS)
	@printf "(libft) $(YELLOW)Created archive $(NAME)$(RESET)\n"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(IFLAGS) -c $^ -o $@
	@printf "(libft) $(BLUE)Created object $(subst $(OBJ_DIR),,$@)$(RESET)\n"

clean:
	@-rm -f $(OBJS)
	@printf "(libft) $(RED)Removing files $(OBJS)$(RESET)\n"


fclean:
	@-rm -f $(NAME)
	@printf "(libft) $(RED)Removing $(NAME)$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re