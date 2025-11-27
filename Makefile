NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_strncmp.c \
	ft_strchr.c ft_strrchr.c \
	ft_toupper.c ft_tolower.c \
	ft_atoi.c \
	ft_bzero.c \
	ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_strdup.c ft_calloc.c \
	ft_itoa.c ft_split.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Create a list of object files based on source files
OBJS = $(SRCS:.c=.o)

BONUS_SCRS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS_SCRS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

# This tells Make: "I want you to build $(NAME)"
all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# The Library Rule. This creates the actual .a file
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# The Pattern Rule. This tells Make how to compile .c into .o
$(OBJS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) test bonus_build

re: fclean all

.PHONY: all clean fclean re bonus