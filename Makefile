NAME = libft.a

SRC = ft_memset.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_bzero.c \
				ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c \
				 ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c \
				 ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_isascii.c \
				 ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
				 ft_memmove.c ft_strdup.c ft_putnbr_fd.c ft_putstr_fd.c \
				 ft_putchar_fd.c ft_itoa.c ft_putendl_fd.c ft_substr.c \
				 ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
				 ft_split.c

OBJ = ft_memset.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_bzero.o \
				ft_isalnum.o ft_isprint.o ft_toupper.o ft_tolower.o \
				 ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_strlen.o \
				 ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_isascii.o \
				 ft_calloc.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
				 ft_memmove.o ft_strdup.o ft_putnbr_fd.o ft_putstr_fd.o \
				 ft_putchar_fd.o ft_itoa.o ft_putendl_fd.o ft_substr.o \
				 ft_strjoin.o ft_strtrim.o ft_strmapi.o ft_striteri.o \
				 ft_split.o

SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
					ft_lstsize.c ft_lstdelone.c ft_lsclear.c ft_lstiter.c \
					ft_lstmap.c

OBJB = ft_lstnew.o ft_lstadd_front.o ft_lstlast.o ft_lstadd_back.o \
					ft_lstsize.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o \
					ft_lstmap.o

CFLAGS =  -Wall -Wextra -Werror

CC = cc

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar -r $(NAME) $(OBJ)

$(OBJ) : %.o : %.c

$(OBJB) : %.o : %.c

%.o : %.c $(INCLUDE)
	$(CC) -c $(CFLAGS) $< -o $@

bonus: $(OBJ) $(OBJB)
	ar -r $(NAME) $(OBJB) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean
	rm -rf $(NAME)

re: fclean all
