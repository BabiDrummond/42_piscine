NAME = bsq

CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS = main.c \
	   ft_utils.c \
	   ft_display.c \
	   ft_file.c \
	   ft_free_all_memory.c \
	   ft_parser.c \
	   ft_solve.c \
	   ft_square.c \
	   ft_validator.c 

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(NAME) executable created successfully!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< -> $@"

clean:
	@$(RM) $(OBJS)
	@echo "Object files removed."


fclean: clean
	@$(RM) $(NAME)
	@echo "Executable $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re