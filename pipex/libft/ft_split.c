/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:53:55 by tcarlott          #+#    #+#             */
/*   Updated: 2022/01/18 16:54:00 by tcarlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			k++;
		while (s[i] != c && s[i])
			i++;
	}
	return (k);
}

static	char	*put_word(char *str, char c)
{
	int		i;
	char	*arr;

	i = 0;
	arr = 0;
	while (str[i] && str[i] != c)
		i++;
	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (!arr)
		return (NULL);
	ft_strlcpy(arr, str, i + 1);
	return (arr);
}

char	**put_arr(int w)
{
	char	**array;

	array = malloc(sizeof(char *) * (w + 1));
	if (!array)
		return (NULL);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**array;

	i = -1;
	if (!s)
		return (NULL);
	words = count_words((char *)s, c);
	array = put_arr(words);
	while (++i < words)
	{
		while (s[0] == c)
			s++;
		array[i] = put_word((char *)s, c);
		if (!array)
		{
			while (i > 0)
				free(array[i--]);
			free(array);
			return (NULL);
		}
		s += ft_strlen(array[i]);
	}
	array[i] = 0;
	return (array);
}
