NAME = libft.a 
SOURCES = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJECTS = $(SOURCES:.c=.o)

$(NAME): all

all: 
	cc -c -Wall -Wextra -Werror $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm  -f $(NAME)

re: fclean all