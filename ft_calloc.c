/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:05:59 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/02 17:24:12 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned long	cpt;
	unsigned char	*res;

	cpt = 0;
	if (size <= 0 || nmemb <= 0)
		return (0x0);
	res = malloc(nmemb * size);
	while (cpt < size)
	{
		res = 0;
		cpt++;
	}
	return ((void *) res);
}

#include <stdio.h>
int main(void)
{
	printf("%lu", sizeof(char));
	fflush(stdout);
	int *callc = (int *) ft_calloc(3, sizeof(int));
	printf("%d %d %d", callc[0], callc[1], callc[2]);
	callc[0] = 1;
	callc[1] = 2;
	callc[2] = 3;
	printf("%d %d %d", callc[0], callc[1], callc[2]);
}
