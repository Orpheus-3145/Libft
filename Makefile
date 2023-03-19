# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fra <fra@student.42.fr>                      +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/14 18:27:31 by anonymous     #+#    #+#                  #
#    Updated: 2023/03/19 18:56:01 by fra           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SHELL := /bin/bash

NAME := libft.a
SRC_DIR := sources
OBJ_DIR := objects
INCLUDE  := include

HEADERS := include/get_next_line.h \
		   include/ft_printf.h \
		   include/libft.h
SOURCES := sources/lst/ft_lstlast_bonus.c\
		   sources/lst/ft_lstnew_bonus.c \
		   sources/lst/ft_lstadd_back_bonus.c \
		   sources/lst/ft_lstdelone_bonus.c \
		   sources/lst/ft_lstsize_bonus.c \
		   sources/lst/ft_lstmap_bonus.c \
		   sources/lst/ft_lstiter_bonus.c \
		   sources/lst/ft_lstclear_bonus.c \
		   sources/lst/ft_lstadd_front_bonus.c \
		   sources/checker/ft_is_long.c \
		   sources/checker/ft_is_number.c \
		   sources/checker/ft_is_int.c \
		   sources/get_next_line/get_next_line.c \
		   sources/memory/ft_memcpy.c \
		   sources/memory/ft_memset.c \
		   sources/memory/ft_bzero.c \
		   sources/memory/ft_memmove.c \
		   sources/memory/ft_memcmp.c \
		   sources/memory/ft_calloc.c \
		   sources/memory/ft_free_double.c \
		   sources/memory/ft_memchr.c \
		   sources/memory/ft_free_single.c \
		   sources/memory/ft_raise_error.c \
		   sources/characters/ft_toupper.c \
		   sources/characters/ft_isascii.c \
		   sources/characters/ft_isprint.c \
		   sources/characters/ft_ishexadigit.c \
		   sources/characters/ft_isalpha.c \
		   sources/characters/ft_isalnum.c \
		   sources/characters/ft_tolower.c \
		   sources/characters/ft_isspace.c \
		   sources/characters/ft_isdigit.c \
		   sources/strings/ft_strchr.c \
		   sources/strings/ft_find_index.c \
		   sources/strings/ft_strmapi.c \
		   sources/strings/ft_n_substr.c \
		   sources/strings/ft_striteri.c \
		   sources/strings/ft_append_char.c \
		   sources/strings/ft_count_occ.c \
		   sources/strings/ft_strtrim.c \
		   sources/strings/ft_substr.c \
		   sources/strings/ft_strncmp.c \
		   sources/strings/ft_strnstr.c \
		   sources/strings/ft_split.c \
		   sources/strings/ft_strjoin.c \
		   sources/strings/ft_strdup.c \
		   sources/strings/ft_strlcpy.c \
		   sources/strings/ft_strlen.c \
		   sources/strings/ft_strlcat.c \
		   sources/strings/ft_strrchr.c \
		   sources/ft_printf/ft_putnbr_fd.c \
		   sources/ft_printf/ft_putstr_fd.c \
		   sources/ft_printf/ft_printf.c \
		   sources/ft_printf/ft_printf_printer.c \
		   sources/ft_printf/ft_putchar_fd.c \
		   sources/ft_printf/ft_putendl_fd.c \
		   sources/numbers/ft_atof.c \
		   sources/numbers/ft_xatoi.c \
		   sources/numbers/ft_atoi.c \
		   sources/numbers/ft_mod.c \
		   sources/numbers/ft_round_to_int.c \
		   sources/numbers/ft_atol.c \
		   sources/numbers/ft_litoa.c \
		   sources/numbers/ft_nbrlen.c \
		   sources/numbers/ft_bin_to_char.c \
		   sources/numbers/ft_xitoa.c \
		   sources/numbers/ft_part_dec.c \
		   sources/numbers/ft_xatof.c \
		   sources/numbers/ft_char_to_bin.c \
		   sources/numbers/ft_part_int.c \
		   sources/numbers/ft_itoa.c \
		   sources/numbers/ft_pow.c
OBJECTS := $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SOURCES:.c=.o))

CC  := gcc
IFLAGS := -I $(INCLUDE)
CFLAGS := -Wall -Wextra -Werror
LFLAGS := -rcs

GREEN = \x1b[32;01m
RED = \x1b[31;01m
BLUE = \x1b[34;01m
RESET = \x1b[0m
YELLOW = \x1b[33;01m

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJECTS) $(HEADERS)
	@ar $(LFLAGS) $(NAME) $(OBJECTS)
	@printf "(libft) $(YELLOW)Created archive $(NAME)$(RESET)\n"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $^ -o $@
	@printf "(libft) $(BLUE)Created object $$(basename $@)$(RESET)\n"

clean:
	@for file in $(shell find $(OBJ_DIR) -type f -name '*.o'); do \
		rm -f $$file;	\
		printf "(libft) $(RED)Removed object $$(basename $$file)$(RESET)\n"; \
	done

fclean:
	@-rm -f $(NAME)
	@printf "(libft) $(RED)Removed archive $(NAME)$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
