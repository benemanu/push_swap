NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBFT_NAME = libft.a
LIBFT_DIR = libft/
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_NAME))

SRC = error_mess.c main.c get_stack.c utils_one.c utils_two.c utils_three.c sort_stack.c sort_stack2.c rules_one.c rules_two.c 
OBJ = error_mess.o main.o get_stack.o utils_one.o utils_two.o utils_three.o sort_stack.o sort_stack2.o rules_one.o rules_two.o

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

val: all
	make -C ./ clean
	valgrind --leak-check=full \
	--show-leak-kinds=all \
	--track-origins=yes \
	--verbose \
	--log-file=valgrind-out.txt \
		./$(NAME) "2147483647 0 20 -4 -2147483648"

clean:
	rm -rf *.o
	make clean -C $(LIBFT_DIR)

fclean:
	rm -rf *.o
	rm -rf $(NAME)
	make fclean -C $(LIBFT_DIR)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

re: fclean all

.PHONY: all clean fclean re
