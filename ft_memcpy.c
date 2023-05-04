/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:59:24 by marvin            #+#    #+#             */
/*   Updated: 2023/05/04 19:06:54 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long unsigned int	i;
	unsigned char		*destination;
	const unsigned char	*source;

	destination = dest;
	source = src;
	if (!destination || !source)
		return (0);
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
