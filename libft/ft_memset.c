/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:45:14 by zafar             #+#    #+#             */
/*   Updated: 2021/10/20 20:23:14 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;

	dest = (unsigned char *)b;
	while (len)
	{
		*dest++ = (unsigned char)c;
		len--;
	}
	return (b);
}
