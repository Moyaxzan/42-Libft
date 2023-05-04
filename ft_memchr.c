/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:31:40 by taospa            #+#    #+#             */
/*   Updated: 2023/05/04 19:02:54 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long int	i;
	char				*mem_block;

	i = 0;
	mem_block = (char *) s;
	while (i < n)
	{
		if (*mem_block == c)
			return (mem_block);
		mem_block++;
		i++;
	}
	return (0x0);
}
