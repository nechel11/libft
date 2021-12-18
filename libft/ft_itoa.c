/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:11:36 by nbyrd             #+#    #+#             */
/*   Updated: 2021/10/24 16:34:21 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_sizer(int n)
{
	int		size;
	long	cont;

	cont = n;
	size = 1;
	if (cont < 0)
	{
		size++;
		cont = cont * -1;
	}
	while (cont >= 10)
	{
		size++;
		cont = cont / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;
	int		len;

	i = 0;
	len = ft_sizer(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	nbr = n;
	if (nbr < 0)
		nbr = nbr * -1;
	str[len - i++] = '\0';
	while (nbr >= 10)
	{
		str[len - i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	str[len - i++] = (nbr % 10) + '0';
	return (str);
}
