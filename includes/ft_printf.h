/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraud <agiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:17:08 by agiraud           #+#    #+#             */
/*   Updated: 2021/06/10 11:23:12 by agiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	int			type;
	int			width;
	int			minus;
	int			zero;
	int			dot;
	int			star;
}				t_flags;

int				ft_printf(const char *format, ...);
int				ft_putchar(int c);
int				ft_parse(const char *str, va_list args);
int				ft_parse_flags(const char *str, int i,
					t_flags *flags, va_list args);
t_flags			ft_init_struct(void);
int				ft_is_type(int c);
int				ft_is_flag(int c);
int				ft_parse_type(int c, t_flags flags, va_list args);
int				ft_flags_dot(const char *str, int i, t_flags *flags,
					va_list args);
t_flags			ft_flags_minus(t_flags flags);
t_flags			ft_flags_width(va_list args, t_flags flags);
t_flags			ft_flags_digit(char c, t_flags flags);
int				ft_print_c(char c, t_flags flags);
int				ft_handle_width(int width, int minimum, int put_zero);
int				ft_putstr_prec(char *str, int prec);
int				ft_print_s(char *str, t_flags flags);
char			*ft_itoa_base(unsigned long long value, int base);
int				ft_print_p(unsigned long long p, t_flags flags);
char			*ft_str_tolower(char *str);
char			*ft_u_itoa(unsigned int n);
int				ft_print_u(unsigned int nb, t_flags flags);
int				ft_print_d_i(int nbr, t_flags flags);
int				ft_print_hexa(unsigned int nb, int upper, t_flags flags);
int				ft_print_percent(t_flags flags);

#endif
