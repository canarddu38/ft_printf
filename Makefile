NAME					= libftprintf.a

SRC_DIR					= src
BONUS_DIR				= bonus
OBJ_DIR					= obj
INCLUDES_DIR			= includes

BONUS_DONE				= .bonus_done
LIBFT_PATH				= libft
LIBFT					= $(LIBFT_PATH)/libft.a

CFLAGS					= -Wall -Werror -Wextra -I$(LIBFT_PATH) -MMD -MP
C_FILES					= $(SRC_DIR)/ft_printf.c \
						  $(SRC_DIR)/count_functions.c \
						  $(SRC_DIR)/conversions.c

BONUS_C_FILES			= $(BONUS_DIR)/ft_printf_bonus.c \
						  $(BONUS_DIR)/count_functions_bonus.c \
						  $(BONUS_DIR)/conversions_bonus.c \
						  $(BONUS_DIR)/parser_bonus.c

O_FILES					= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(C_FILES))
O_FILES_BONUS			= $(patsubst $(BONUS_DIR)/%.c, $(OBJ_DIR)/%.o, $(BONUS_C_FILES))
O_FILES_ALL				= $(O_FILES) $(O_FILES_BONUS)
D_FILES					= $(O_FILES_ALL:.o=.d)

all: $(NAME)
bonus: $(BONUS_DONE)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

$(NAME): $(LIBFT) $(O_FILES)
	cp $(LIBFT) $(NAME)
	ar -rcs $@ $(O_FILES)

$(BONUS_DONE): $(LIBFT) $(O_FILES_ALL)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(O_FILES_ALL)
	touch $(BONUS_DONE)



$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(SRC_DIR) -c $< -o $@

$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c
	$(CC) $(CFLAGS) -I$(BONUS_DIR) -c $< -o $@

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(O_FILES_ALL) $(BONUS_DONE) $(D_FILES)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(D_FILES)