/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:36:06 by taospa            #+#    #+#             */
/*   Updated: 2023/04/02 22:22:16 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_total_len(char **strs, size_t size, char *sep)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	len = len + ((size - 1) * ft_strlen(sep)) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	size_t	tot_len;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	tot_len = ft_total_len(strs, size, sep);
	str = malloc (sizeof(char) * tot_len);
	if (!str)
		return (0x0);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strlcat(str, strs[i], tot_len);
		if (i < size - 1)
			ft_strlcat(str, sep, tot_len);
		i++;
	}
	return (str);
}
