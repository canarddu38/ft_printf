NAME		= libftprintf.a
BONUS_DONE	= .bonus_done
CFLAGS		= -Wall -Werror -Wextra -I./libft
C_FILES		=	ft_printf.c libft/libft.a

BONUS_C_FILES = .

O_FILES			= $(C_FILES:.c=.o)
O_FILES_BONUS	= $(BONUS_C_FILES:.c=.o)
O_FILES_ALL		= $(O_FILES) $(O_FILES_BONUS)

all: $(NAME)

$(NAME): $(O_FILES)
	ar -rcs $@ $(O_FILES)

bonus: $(BONUS_DONE)

$(BONUS_DONE): $(O_FILES_ALL)
	ar -rcs $(NAME) $(O_FILES_ALL)
	touch $(BONUS_DONE)

clean:
	rm -rf $(O_FILES_ALL) $(BONUS_DONE)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: $(NAME) all clean fclean re bonus