CC = cc
AR = ar rcs
NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
OPTION = -c -I
INC_DIR = .
RANNAME = ranlib $(NAME)
SRC = ft_printf.c print_utils.c print_hex.c
OBJ := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) $(OPTION) $(INC_DIR) $< -o $@

clean:
		rm -f  $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
