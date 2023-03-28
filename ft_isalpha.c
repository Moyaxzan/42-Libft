/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:02:51 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/03/21 15:02:51 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isupper(char character)
{
	return (character >= 'A' && character <= 'Z');
}

static	int	ft_islower(char character)
{
	return (character >= 'a' && character <= 'b');
}

int	ft_isalpha(char character)
{
	return (ft_isupper(character) || ft_islower(character));
}
