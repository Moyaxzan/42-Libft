/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:51:19 by taospa            #+#    #+#             */
/*   Updated: 2023/03/30 22:33:01 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*malloc_num(long int n, int *len)
{
	char	*res;

	if (n < 0)
		(*len)++;
	while (n)
	{
		(*len)++;
		n = n / 10;
	}
	res = malloc(sizeof(char) * *len);
	return (res);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	int			len;
	char		*res;

	nbr = n;
	len = 1;
	res = malloc_num(nbr, &len);
	if (!res)
		return (0x0);
	nbr = n;
	res[len] = '\0';
	len = len - 2;
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res);
}
