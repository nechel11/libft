/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:51:33 by zafar             #+#    #+#             */
/*   Updated: 2021/10/20 20:11:43 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dest2;
	const char		*src2;

	if (!dest && !src)
		return ((void *)0);
	dest2 = (char *)dest;
	src2 = (const char *)src;
	while (n--)
		dest2[n] = src2[n];
	return (dest);
}
