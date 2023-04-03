/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:08:10 by taospa            #+#    #+#             */
/*   Updated: 2023/04/03 23:26:53 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_num(char *theString)
{
	int	i;

	i = 0;
	if (theString != 0x0)
	{
		while (theString[i] >= '0' && theString[i] <= '9')
			i++;
	}
	return (i);
}

int	ft_atoi(char *theString)
{
	unsigned long		i;
	int					sign;
	int					nbr;
	unsigned long int	end_num;

	i = 0;
	sign = 1;
	nbr = 0;
	while (theString[i] == 32 || (9 <= theString[i] && theString[i] <= 13))
		i++;
	if (theString[i] == '-' || theString[i] == '+')
	{
		if (theString[i] == '-')
			sign = -sign;
		i++;
	}
	end_num = i + size_num(&theString[i]);
	while (i < end_num)
	{
		nbr = nbr * 10;
		nbr += (theString[i] - '0');
		i++;
	}
	return (nbr * sign);
}
