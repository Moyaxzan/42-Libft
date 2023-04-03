/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:24:59 by taospa            #+#    #+#             */
/*   Updated: 2023/04/03 14:28:43 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	while (i >= 0)
	{
		if (string[i] == searchedChar)
			return (&(string[i]));
		i--;
	}
	return (0x0);
}
