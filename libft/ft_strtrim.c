/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:37:41 by zafar             #+#    #+#             */
/*   Updated: 2021/10/25 15:40:22 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cheqer(char const *str, char const c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		dlina;
	int		i;

	if (!s1)
		return (NULL);
	dlina = ft_strlen(s1) - 1;
	i = 0;
	while ((cheqer(set, s1[i]) == 1))
		i++;
	while (dlina && (cheqer(set, s1[dlina]) == 1))
		dlina--;
	if (i <= dlina)
		res = ft_substr(s1, i, dlina - i + 1);
	else
		res = ft_substr(s1, i, 0);
	return (res);
}
