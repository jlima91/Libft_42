/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:06:56 by jlima             #+#    #+#             */
/*   Updated: 2022/09/28 19:07:38 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isspace() function checks whether c, which must have the value
** of an unsigned char or EOF, is a white-space character. In the "C"
** and "POSIX" locales, these are: space, form-feed ('\f'), newline
** ('\n'), carriage return ('\r'), horizontal tab ('\t'), vertical
** tab ('\v').
** 
** Return Value: The values returned are nonzero if the character c
** falls into the tested class, and a zero value if not.
*/

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\r' || c == '\v' || c == '\f')
		return (8);
	else
		return (0);
}