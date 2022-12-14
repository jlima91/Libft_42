/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:31:59 by jlima             #+#    #+#             */
/*   Updated: 2022/07/05 18:14:05 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

typedef struct s_ident
{
	va_list(args);
	int	dash;
	int	zero;
	int	plus;
	int	space;
	int	hashtag;
	int	dot;
	int	asterisk;
	int	x;
	int	width;
	int	len;
	int	precision;
	int	count;
}		t_ident;

size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(unsigned int n);
char	*ft_strrev(char *str);
char	*hex_conversion_unsigned(t_ident *ptr, const char *str, int n);
char	*hex_conversion_long(t_ident *ptr);
void	*ft_calloc(size_t nelem, size_t elsize);

int		ft_printf(const char *format, ...);

void	ft_print_char(t_ident *ptr);
void	ft_print_int(t_ident *ptr);
void	ft_print_str(t_ident *ptr);
void	ft_print_hex(t_ident *ptr, const char *str, int n);
void	ft_print_unsigned(t_ident *ptr);
void	ft_print_pointer(t_ident *ptr);
void	ft_print_perc(t_ident *ptr);

#endif