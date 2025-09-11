# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 13:50:13 by dwotsche          #+#    #+#              #
#    Updated: 2025/09/08 15:27:05 by dwotsche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I include

SRC_DIR = src
OBJ_DIR = obj
LIB = libftprintf.a

SRCS = \
	$(SRC_DIR)/ft_printf_utils.c \
	$(SRC_DIR)/ft_printf.c

OBJS = \
	$(OBJ_DIR)/ft_printf_utils.o \
	$(OBJ_DIR)/ft_printf.o

LIBFT_DIR = ../libft
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(LIB)

$(LIB): $(OBJS) $(LIBFT_A)
	cp $(LIBFT_A) libft.a
	ar rcs $@ $(OBJS)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ_DIR)/*.o

fclean: clean
	rm -f $(LIB) libft.a

re: fclean all

.PHONY: all clean fclean re
