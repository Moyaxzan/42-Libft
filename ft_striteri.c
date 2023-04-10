/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:02:37 by taospa            #+#    #+#             */
/*   Updated: 2023/04/10 19:26:24 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	function(unsigned int i, char *c)
// {
// 	if (i % 2 && *c >= 'A' && *c <= 'Z')
// 		*c = *c + 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str = malloc(sizeof(char) * 7);
//
// 	str[0] = 'H';
// 	str[1] = 'H';
// 	str[2] = 'H';
// 	str[3] = 'H';
// 	str[4] = 'H';
// 	str[5] = 'H';
// 	str[6] = 0;
// 	printf("str = %s\n", str);
// 	ft_striteri(str, function);
// 	printf("str = %s\n", str);
// }
