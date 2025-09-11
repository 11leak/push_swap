# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 13:25:43 by dwotsche          #+#    #+#              #
#    Updated: 2025/09/08 15:18:06 by dwotsche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I include

SRC_DIR = src
OBJ_DIR = obj
LIB = libft.a

SRCS = \
	$(SRC_DIR)/ft_atoi.c \
	$(SRC_DIR)/ft_bzero.c \
	$(SRC_DIR)/ft_calloc.c \
	$(SRC_DIR)/ft_isalnum.c \
	$(SRC_DIR)/ft_isalpha.c \
	$(SRC_DIR)/ft_isascii.c \
	$(SRC_DIR)/ft_isdigit.c \
	$(SRC_DIR)/ft_isprint.c \
	$(SRC_DIR)/ft_itoa.c \
	$(SRC_DIR)/ft_memchr.c \
	$(SRC_DIR)/ft_memcmp.c \
	$(SRC_DIR)/ft_memcpy.c \
	$(SRC_DIR)/ft_memmove.c \
	$(SRC_DIR)/ft_memset.c \
	$(SRC_DIR)/ft_putchar_fd.c \
	$(SRC_DIR)/ft_putendl_fd.c \
	$(SRC_DIR)/ft_puthex_fd.c \
	$(SRC_DIR)/ft_putnbr_fd.c \
	$(SRC_DIR)/ft_putstr_fd.c \
	$(SRC_DIR)/ft_split.c \
	$(SRC_DIR)/ft_strchr.c \
	$(SRC_DIR)/ft_strdup.c \
	$(SRC_DIR)/ft_striteri.c \
	$(SRC_DIR)/ft_strjoin.c \
	$(SRC_DIR)/ft_strlcat.c \
	$(SRC_DIR)/ft_strlcpy.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_strmapi.c \
	$(SRC_DIR)/ft_strncmp.c \
	$(SRC_DIR)/ft_strnstr.c \
	$(SRC_DIR)/ft_strrchr.c \
	$(SRC_DIR)/ft_strtrim.c \
	$(SRC_DIR)/ft_substr.c \
	$(SRC_DIR)/ft_tolower.c \
	$(SRC_DIR)/ft_toupper.c
OBJS = \
	$(OBJ_DIR)/ft_atoi.o \
	$(OBJ_DIR)/ft_bzero.o \
	$(OBJ_DIR)/ft_calloc.o \
	$(OBJ_DIR)/ft_isalnum.o \
	$(OBJ_DIR)/ft_isalpha.o \
	$(OBJ_DIR)/ft_isascii.o \
	$(OBJ_DIR)/ft_isdigit.o \
	$(OBJ_DIR)/ft_isprint.o \
	$(OBJ_DIR)/ft_itoa.o \
	$(OBJ_DIR)/ft_memchr.o \
	$(OBJ_DIR)/ft_memcmp.o \
	$(OBJ_DIR)/ft_memcpy.o \
	$(OBJ_DIR)/ft_memmove.o \
	$(OBJ_DIR)/ft_memset.o \
	$(OBJ_DIR)/ft_putchar_fd.o \
	$(OBJ_DIR)/ft_putendl_fd.o \
	$(OBJ_DIR)/ft_puthex_fd.o \
	$(OBJ_DIR)/ft_putnbr_fd.o \
	$(OBJ_DIR)/ft_putstr_fd.o \
	$(OBJ_DIR)/ft_split.o \
	$(OBJ_DIR)/ft_strchr.o \
	$(OBJ_DIR)/ft_strdup.o \
	$(OBJ_DIR)/ft_striteri.o \
	$(OBJ_DIR)/ft_strjoin.o \
	$(OBJ_DIR)/ft_strlcat.o \
	$(OBJ_DIR)/ft_strlcpy.o \
	$(OBJ_DIR)/ft_strlen.o \
	$(OBJ_DIR)/ft_strmapi.o \
	$(OBJ_DIR)/ft_strncmp.o \
	$(OBJ_DIR)/ft_strnstr.o \
	$(OBJ_DIR)/ft_strrchr.o \
	$(OBJ_DIR)/ft_strtrim.o \
	$(OBJ_DIR)/ft_substr.o \
	$(OBJ_DIR)/ft_tolower.o \
	$(OBJ_DIR)/ft_toupper.o

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $@ $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ_DIR)/*.o

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
