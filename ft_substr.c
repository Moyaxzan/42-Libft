/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:40:45 by taospa            #+#    #+#             */
/*   Updated: 2023/05/03 16:06:50 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//veriff if negative start or len ?
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substring;
	unsigned int		i;

	if (!s)
		return (0x0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = start;
	while (i < start + len && s[i])
		i++;
	substring = malloc(sizeof(char) * (len + 1));
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
