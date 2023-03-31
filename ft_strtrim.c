/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:34:49 by taospa            #+#    #+#             */
/*   Updated: 2023/03/31 16:01:02 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*res;

	len = 1;
	i = 0;
	while (s1[i])
	{
		if (to_trim(s1[i], set))
			len++;
		i++;
	}
	res = malloc(sizeof(char) * len);
	if (!res)
		return (0x0);
	i = 0;
	len = 0;
	while (s1[i])
	{
		if (!to_trim(s1[i], set))
			res[len++] = s1[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}
