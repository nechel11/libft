/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:13:28 by nbyrd             #+#    #+#             */
/*   Updated: 2021/10/26 13:20:49 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	i;

	if (!needle[0])
		return ((char *)haystack);
	pos = 0;
	while (haystack[pos] && pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] && haystack[pos + i] == needle[i]
				&& (pos + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)(haystack + pos));
		}
		pos++;
	}
	return (0);
}
