/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:50:14 by jlima             #+#    #+#             */
/*   Updated: 2022/05/27 12:55:04 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumber(char *arg)
{
	int	i;

	i = 0;
    if (arg[0] == '-')
        i++;
    while (arg[i] != '\0')
    {
        if ((arg[i] >= '0' && arg[i] <= '9'))
		i++;
	    else
		    return (0);
    }
	return (1);
}