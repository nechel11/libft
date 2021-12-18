/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:32:50 by nbyrd             #+#    #+#             */
/*   Updated: 2021/10/25 17:57:06 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_dlina;
	size_t	i;
	size_t	src_dlina;
	size_t	j;

	dst_dlina = ft_strlen(dst);
	src_dlina = ft_strlen(src);
	j = dst_dlina;
	i = 0;
	if (dst_dlina < size - 1 && size > 0)
	{
		while (src[i] && (dst_dlina + i < size - 1))
			dst[j++] = src[i++];
		dst[j] = 0;
	}
	if (dst_dlina >= size)
		dst_dlina = size;
	return (dst_dlina + src_dlina);
}
