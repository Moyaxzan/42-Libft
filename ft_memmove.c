/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:20:36 by marvin            #+#    #+#             */
/*   Updated: 2023/03/22 00:20:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	long unsigned int	i;
	unsigned char		*dest;
	const unsigned char	*src;

	dest = destination;
	src = source;
	if (!destination || !source)
		return (0);
	if (dest < src)
	{
		i = 0;
		while (i++ < size)
			dest[i] = src[i];
	}
	else if (dest != src)
	{
		i = size;
		while (i-- > 0)
			dest[i] = src[i];
		dest[i] = src[i];
	}
	return (dest);
}
