/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:31:40 by taospa            #+#    #+#             */
/*   Updated: 2023/04/03 20:49:53 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned long int	i;
	char				*mem_block;

	i = 0;
	mem_block = (char *) memoryBlock;
	while (i < size)
	{
		if (*mem_block == searchedChar)
			return (mem_block);
		mem_block++;
		i++;
	}
	return (0x0);
}
