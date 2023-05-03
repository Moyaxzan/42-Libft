/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:23:46 by taospa            #+#    #+#             */
/*   Updated: 2023/05/03 15:35:29 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	while (*second && *first && *first == *second && length)
	{
		second++;
		first++;
		length--;
	}
	if (!length)
		return (0);
	return (*(unsigned char *) first - *(unsigned char *) second);
}
