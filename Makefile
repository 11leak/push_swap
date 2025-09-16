# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 12:04:07 by dwotsche          #+#    #+#              #
#    Updated: 2025/09/16 16:41:34 by dwotsche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler und Flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
INCLUDES= -I include -I lib/libft/include -I lib/printf/include

# Linker
LDFLAGS = -L lib/libft -L lib/printf
LDLIBS  = -lftprintf -lft

# Pfade
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Programm
NAME    = $(BIN_DIR)/push_swap

# Quellen & Objekte
SRCS    = $(SRC_DIR)/main.c \
		  $(SRC_DIR)/args_handling.c \
		  $(SRC_DIR)/args_handling_utils.c \
		  $(SRC_DIR)/list_helpers.c \
		  $(SRC_DIR)/list_helpers_utils.c \
		  $(SRC_DIR)/stack_op_swap.c \
		  $(SRC_DIR)/stack_op_push.c \
		  $(SRC_DIR)/stack_op_rotate.c \
		  $(SRC_DIR)/stack_op_reverse_rotate.c \
		  $(SRC_DIR)/sort_utils.c \
		  $(SRC_DIR)/radix_sort.c \
		  $(SRC_DIR)/small_sort.c \
		  $(SRC_DIR)/small_sort_utils.c
OBJS    = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Bibliotheken
LIBFT   = lib/libft/libft.a
PRINTF  = lib/printf/libftprintf.a

# Default
all: $(NAME)

# Binaries/Obj-Verzeichnisse anlegen
$(BIN_DIR):
	@mkdir -p $@

$(OBJ_DIR):
	@mkdir -p $@

# Linken
$(NAME): $(OBJS) $(LIBFT) $(PRINTF) | $(BIN_DIR)
	$(CC) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $@

# Kompilieren (Pattern-Rule, skaliert automatisch bei mehr .c)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Libs bauen (werden nur gebaut, wenn nötig – kein Relink)
$(LIBFT):
	$(MAKE) -C lib/libft

$(PRINTF):
	$(MAKE) -C lib/printf

# Clean Targets
clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C lib/libft clean
	@$(MAKE) -C lib/printf clean

fclean: clean
	@rm -rf $(BIN_DIR)
	@$(MAKE) -C lib/libft fclean
	@$(MAKE) -C lib/printf fclean

re: fclean all

.PHONY: all clean fclean re
