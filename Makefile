# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiraud <agiraud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 17:17:23 by agiraud           #+#    #+#              #
#    Updated: 2021/02/22 17:17:23 by agiraud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS =	sources/ft_printf.c \
		sources/ft_parse_type.c \
		sources/ft_handle_flags.c \
		sources/ft_print_c.c \
		sources/ft_handle_width.c \
		sources/ft_putstr_prec.c \
		sources/ft_print_s.c \
		sources/ft_print_p.c \
		sources/ft_itoa_base.c \
		sources/ft_str_tolower.c \
		sources/ft_print_d_i.c \
		sources/ft_print_u.c \
		sources/ft_u_itoa.c \
		sources/ft_print_hexa.c \
		sources/ft_print_percent.c \
		sources/ft_putchar.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
		@gcc -c -Wall -Wextra -Werror libft/*.c -I libft/libft.h
		@gcc -c $(SRCS)
		@ar rc $(NAME) *.o
		@echo "\033[032mLibftprintf : Object files Created\033[0m"
		@echo "\033[032mLibftprintf : Libftprintf.a Created\033[0m"

clean :
		@rm -rf *.o libft/*.o
		@echo "\033[32mLibftprintf : Object files Removed\033[0m"

fclean : clean
		@rm -rf $(NAME)
		@echo "\033[32mLibftprintf : Libftprintf.a Removed\033[0m"

re : fclean all
