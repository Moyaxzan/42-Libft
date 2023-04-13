/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:40:45 by taospa            #+#    #+#             */
/*   Updated: 2023/04/02 19:29:15 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//veriff if negative start or len ?
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substring;
	unsigned int		i;

	i = start;
	while (i < start + len && s[i])
		i++;
	substring = malloc(sizeof(char) * i);
	if (!substring)
		return (0x0);
	i = start;
	while (i < start + len && s[i])
	{
		substring[i - start] = s[i];
		i++;
	}
	substring[i - start] = '\0';
	return (substring);
}
