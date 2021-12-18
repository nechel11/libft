/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:26:48 by zafar             #+#    #+#             */
/*   Updated: 2021/10/26 15:28:33 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cheqer(size_t n, size_t m)
{
	if (n > m)
		return (m);
	return (n);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	cheq;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	cheq = cheqer(ft_strlen(s + start), len);
	res = (char *)malloc(sizeof(char) * cheq + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			res[j] = s[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}
