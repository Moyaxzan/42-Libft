/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taospa <taospa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 22:45:08 by taospa            #+#    #+#             */
/*   Updated: 2023/04/07 00:37:52 by taospa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb > 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd('0' + nb % 10, fd);
	}
	else
		ft_putchar_fd('0' + nb, fd);
}
