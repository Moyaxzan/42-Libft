/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:16:20 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/03/21 15:16:20 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(char character);
int		ft_isalpha(char character);
int		ft_isascii(int character);
int		ft_isdigit(char character);
int		ft_isprint(char character);
char	*ft_itoa(int n);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
char	**ft_split(char const *src, char separator);
char	*ft_strchr(char *string, int searchedChar);
char	*ft_strjoin(int size, char **strs, char *sep);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlen(const char *string);
char	*ft_strrchr(char *string, int searchedChar);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif