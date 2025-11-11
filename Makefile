CC						= clang
NAME					= libftprintf.a
SRC_DIR					= src
OBJ_DIR					= obj
INCLUDES_DIR			= includes
BONUS_DONE				= .bonus_done
LIBFT_PATH				= libft
LIBFT					= $(LIBFT_PATH)/libft.a
CFLAGS					= -Wall -Werror -Wextra -I$(LIBFT_PATH) -I$(INCLUDES_DIR) -MMD -MP
C_FILES					= $(SRC_DIR)/ft_printf.c \
						  $(SRC_DIR)/count_functions.c \
						  $(SRC_DIR)/conversions.c \
						  $(SRC_DIR)/parser.c

BONUS_C_FILES			= 	$(SRC_DIR)/parser.c

O_FILES					= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(C_FILES))
O_FILES_BONUS			= $(BONUS_C_FILES:%.c=../$(OBJ_DIR)/%.o)
O_FILES_ALL				= $(O_FILES) $(O_FILES_BONUS)
D_FILES					= $(O_FILES_ALL:.o=.d)

all: $(NAME)

$(LIBFT):
	$(MAKE) CC=$(CC) -C $(LIBFT_PATH) all

$(NAME): $(LIBFT) $(O_FILES)
	cp $(LIBFT) $(NAME)
	ar -rcs $@ $(O_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
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