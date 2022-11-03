/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:26:10 by jlima             #+#    #+#             */
/*   Updated: 2022/07/08 11:26:30 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(char *str)
{
	int		i;
	double	ret;
	double	n_deci;

	i = 0;
	while (str[i] && str[i] != '.')
		i++;
	if (!str[i])
	{
		ret = (double)ft_atoi(str);
		return (ret);
	}
	str[i] = '\0';
	ret = (double)ft_atoi(str);
	n_deci = (double)ft_atoi(&str[i + 1]);
	while (n_deci > 1)
		n_deci /= 10;
	while (str[++i] == '0')
		n_deci /= 10;
	if (str[0] == '-')
		return (ret - n_deci);
	return (ret + n_deci);
}