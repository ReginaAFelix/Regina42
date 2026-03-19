NAME := ft_cat
CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_DIR := srcs/
SRC_FILES := main.c ft_cat.c ft_error.c
OBJ_FILES := $(SRC_FILES:.c=.o)

SRCS := $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS := $(addprefix $(SRC_DIR), $(OBJ_FILES))

HEADER := -I includes/
RM := rm -f

all: $(NAME)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re