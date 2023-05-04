/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:51:27 by taospa            #+#    #+#             */
/*   Updated: 2023/05/04 19:04:48 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char				*p1;
	unsigned char				*p2;
	unsigned long int			i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (i < n - 1 && *p1 == *p2)
	{
		i++;
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
