/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:21:27 by marvin            #+#    #+#             */
/*   Updated: 2023/05/03 15:54:59 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_word(const char *beg_word, char separator)
{
	int	i;

	i = 0;
	while (beg_word[i] && beg_word[i] != separator)
		i++;
	return (i);
}

static int	count_words(char const *src, char separator)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (src[i])
	{
		while (src[i] && src[i] == separator)
			i++; 
		if (src[i])
			cpt++;
		while (src[i] && src[i] != separator)
			i++;
	}
	return (cpt);
}

static char	*fill_word(char const *beg_word, char separator)
{
	char	*word;
	int		size_word;
	int		i;

	i = 0;
	size_word = len_word(beg_word, separator);
	word = malloc(sizeof(char) * size_word);
	if (!word)
		return (NULL);
	while (beg_word[i] && beg_word[i] != separator)
	{
		word[i] = beg_word[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *src, char separator)
{
	char	**splitted_tab;
	int		i;
	int		cpt;

	if (!src)
		return (0x0);
	i = 0;
	cpt = 0;
	splitted_tab = malloc(sizeof(char *) * (count_words(src, separator) + 1));
	if (!splitted_tab)
		return (NULL);
	while (src[i])
	{
		while (src[i] && src[i] == separator)
			i++;
		if (src[i])
		{
			splitted_tab[cpt] = fill_word(&(src[i]), separator);
			if (!splitted_tab[cpt])
				return (NULL);
			cpt++;
		}
		while (src[i] && src[i] != separator)
			i++;
	}
	splitted_tab[cpt] = NULL;
	return (splitted_tab);
}
