/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:02:51 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/05/03 13:57:44 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isupper(int character)
{
	return (character >= 'A' && character <= 'Z');
}

static	int	ft_islower(int character)
{
	return (character >= 'a' && character <= 'z');
}

int	ft_isalpha(int character)
{
	return (ft_isupper(character) || ft_islower(character));
}
