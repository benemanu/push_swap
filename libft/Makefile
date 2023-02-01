NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
    ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c\
    ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
    ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
    ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
    ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c\
    ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
    ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c\

SRC_GNL = get_next_line.c get_next_line_utils.c

SRC_PF = ft_print_c.c ft_print_p.c ft_print_int.c ft_print_hexup.c\
		ft_print_hexlow.c ft_print_str.c ft_printf.c ft_print_u.c\

OBJ = $(SRC:.c=.o)

OBJ_GNL = $(SRC_GNL:.c=.o)

OBJ_PF = $(SRC_PF:.c=.o)

CC = gcc

BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c

BONUS_OBJS = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_GNL) $(OBJ_PF) $(BONUS_OBJS)
	ar rcs libft.a *.o

clean:
	rm -f *.o

bonus:		$(OBJ) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

fclean:
	rm -f *.o
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
