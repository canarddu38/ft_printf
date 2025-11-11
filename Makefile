CC						= clang
NAME					= libftprintf.a
BONUS_DONE				= .bonus_done
LIBFT_PATH				= libft
LIBFT					= $(LIBFT_PATH)/libft.a
CFLAGS					= -Wall -Werror -Wextra -I$(LIBFT_PATH) -MMD -MP
C_FILES					=	ft_printf.c \
							count_functions.c


BONUS_C_FILES			= 

O_FILES					= $(C_FILES:.c=.o)
O_FILES_BONUS			= $(BONUS_C_FILES:.c=.o)
O_FILES_ALL				= $(O_FILES) $(O_FILES_BONUS)
D_FILES					= $(O_FILES_ALL:.o=.d)

all: $(NAME)

$(LIBFT):
	$(MAKE) CC=$(CC) -C $(LIBFT_PATH) all

$(NAME): $(LIBFT) $(O_FILES)
	cp $(LIBFT) $(NAME)
	ar -rcs $@ $(O_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#bonus: $(BONUS_DONE)

#$(BONUS_DONE): $(O_FILES_ALL)
#	cp $(LIBFT) $(NAME)
#	ar -rcs $(NAME) $(O_FILES_ALL)
#	touch $(BONUS_DONE)

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(O_FILES_ALL) $(BONUS_DONE) $(D_FILES)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(D_FILES)