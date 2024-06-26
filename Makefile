# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: michi <michi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/28 05:51:41 by michi             #+#    #+#              #
#    Updated: 2024/05/12 23:47:26 by michi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
	ft_isprint.c	ft_putchar_fd.c	ft_striteri.c	ft_strnstr.c \
	ft_atoi.c	ft_itoa.c	ft_putendl_fd.c	ft_strjoin.c	ft_strrchr.c \
	ft_calloc.c	ft_memchr.c	ft_putnbr_fd.c	ft_strlcat.c	ft_strtrim.c \
	ft_isalnum.c	ft_memcmp.c	ft_putstr_fd.c	ft_strlcpy.c	ft_substr.c \
	ft_isalpha.c	ft_memcpy.c	ft_split.c	ft_strlen.c	ft_tolower.c \
	ft_isascii.c	ft_memmove.c	ft_strchr.c	ft_strmapi.c	ft_toupper.c \
	ft_isdigit.c	ft_memset.c	ft_strdup.c	ft_strncmp.c ft_bzero.c

SOURCES_B = \
	ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c \
	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c	ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_B = $(SOURCES_B:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)
bonus: $(OBJECTS_B)
	$(AR) $(NAME) $(OBJECTS_B)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -f $(OBJECT_B)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re
