/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:21:58 by nbyrd             #+#    #+#             */
/*   Updated: 2021/10/20 19:41:22 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		minus;
	long	res;

	minus = 1;
	res = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			minus *= -1;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str++ - '0');
		if (res < 0)
		{
			if (minus < 0)
				return (0);
			else
				return (-1);
		}	
	}
	return (res * minus);
}
