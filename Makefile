# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 20:59:42 by ayermeko          #+#    #+#              #
#    Updated: 2023/11/09 21:48:20 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rc
SRC_DIR = code
INC_DIR = -I include/
BIN_DIR = bin

# Colors

# Reset
END_COLOR	= \033[0m       # Text Reset

# Regular Colors
BLACK	= \033[0;30m        # Black
RED		= \033[0;31m          # Red
GREEN	= \033[0;32m        # Green
YELLOW	= \033[0;33m       # Yellow
BLUE	= \033[0;34m         # Blue
PURPLE	= \033[0;35m       # Purple
CYAN	= \033[0;36m         # Cyan
WHITE	= \033[0;37m        # White

# Sources

SRCS = $(shell find ./code -type f -exec basename {} \; | cut -d. -f2- | rev)
SRC = $(addprefix $(SRC_DIR)/, $(addsuffix .c) $(SRCS))
OBJ = $(addprefix $(BIN_DIR)/, $(addsuffix .o, $(SRCS)))

# Process

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN)$(NAME) compiled. $(END_COLOR)"

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c Makefile | $(BIN_DIR)
	@$(CC) -c $(CFLAGS) -I $(INC_DIR) $< -o $@
	@echo "$(BLUE)Compiling... $(notdir $<)$(END_COLOR)"

$(BIN_DIR):
	@mkdir $(BIN_DIR)
	@echo "$(YELLOW)Created $(BIN_DIR)/ directory in $(DIRS)/$(END_COLOR)"

clean:
	@$(RM) $(BIN_DIR)
	@echo "$(YELLOW)$(NAME) object files and bin/ cleaned.$(END_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)$(NAME) .a file cleaned.$(END_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned all and rebuilt $(NAME)$(END_COLOR)"

.PHONY: all clean fclean re