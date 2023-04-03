/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:23:46 by taospa            #+#    #+#             */
/*   Updated: 2023/04/03 20:30:03 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	int					diff;
	unsigned long int	i;

	diff = 0;
	i = 0;
	if (length == 0)
		return (0);
	while (second[i] != '\0' && first[i] != '\0' && diff == 0 && i < length - 1)
	{
		diff = first[i] - second[i];
		i++;
	}
	if (diff == 0)
		diff = first[i] - second[i];
	return (diff);
}
