/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:16:05 by taospa            #+#    #+#             */
/*   Updated: 2023/04/03 14:28:58 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == searchedChar)
			return (&(string[i]));
		i++;
	}
	return (0x0);
}
