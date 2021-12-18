/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:36:00 by nbyrd             #+#    #+#             */
/*   Updated: 2021/10/20 21:12:42 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!arr && !n)
		return ((void *)0);
	while (i < n)
	{
		if (*(unsigned char *)(arr + i) == (unsigned char)c)
			return ((void *)(arr + i));
		i++;
	}
	return ((void *)0);
}
