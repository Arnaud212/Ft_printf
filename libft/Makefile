# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiraud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/03 15:10:10 by agiraud           #+#    #+#              #
#    Updated: 2019/12/03 19:10:39 by agiraud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LST     =ft_lstnew.c \
        ft_lstsize.c \
        ft_lstadd_front.c \
        ft_lstlast.c \
        ft_lstadd_back.c \
        ft_lstdelone.c \
        ft_lstclear.c \
        ft_lstiter.c \
        ft_lstmap.c 

LIST    = ${LST:.c=.o}

.PHONY : all clean fclean re up

CC = gcc $(INCLUDES) $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror -g3

NAME = libft.a

HEADERS = libft.h

INCLUDES = -I 

SRCS =  ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memccpy.c \
        ft_memmove.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strlen.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_strnstr.c \
        ft_atoi.c \
        ft_calloc.c \
        ft_strdup.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_split.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(SRCS) $(OBJS) $(HEADERS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo "\033[032mLibft : Object files Created\033[0m"
		@echo "\033[032mLibft : Libft.a Created\033[0m"

clean :
		@rm -f $(OBJS) $(LIST)
		@echo "\033[32mLibft : Object files Removed\033[0m"

fclean : clean
		@rm -f $(NAME) $(LIST)
		@echo "\033[32mLibft : Libft.a Removed\033[0m"

up : all clean

re : fclean all

bonus:
		gcc ${INCLUDES} ${CFLAGS} -c ${LST}
		ar rc $(NAME) $(LIST)
		ranlib $(NAME)

.SILENT: $(OBJS)
