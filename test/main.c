/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:42:39 by marvin            #+#    #+#             */
/*   Updated: 2023/03/21 23:42:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("ft_isalphanum('5') = %d\n", ft_isalnum('5'));
	printf("isalpha('5') = %d\n", ft_isalpha('5'));
	printf("isascii('e') = %d\n", ft_isascii('e'));
	printf("isdigit'5') = %d\n", ft_isdigit('5'));
	printf("ft_isprint('5') = %d\n", ft_isprint('5'));
	printf("ft_strlen(hohoho) %d\n", ft_strlen("hohoho"));
	return (0);
}
