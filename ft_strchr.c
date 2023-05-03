/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:16:05 by taospa            #+#    #+#             */
/*   Updated: 2023/05/03 14:01:27 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i] || !searchedChar)
	{
		if (string[i] == searchedChar)
			return (&(string[i]));
		i++;
	}
	return (0x0);
}
