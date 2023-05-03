/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:51:27 by taospa            #+#    #+#             */
/*   Updated: 2023/05/03 17:47:43 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned char				*p1;
	unsigned char				*p2;
	unsigned long int		i;

	p1 = (unsigned char *) pointer1;
	p2 = (unsigned char *) pointer2;
	i = 0;
	while (i < size - 1 && *p1 == *p2)
	{
		i++;
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
