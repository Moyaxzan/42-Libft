/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:24:47 by taospa            #+#    #+#             */
/*   Updated: 2023/05/03 17:42:42 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, const char *little, size_t len)
{
	unsigned long int	i;
	unsigned long int	little_len;
	int					j;

	i = 0;
	if (!len)
		return (big);
	little_len = ft_strlen(little);
	while (i <= len - little_len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
			j++;
		if (!little[j])
			return (&(big[i]));
		i++;
	}
	return (0x0);
}
