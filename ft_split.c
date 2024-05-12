/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:33:36 by michi             #+#    #+#             */
/*   Updated: 2024/05/06 16:21:06 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(char const *s, char c)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**errorlist(char **list, size_t i)
{
	while (i-- > 0)
	{
		free(list[i]);
	}
	free(list);
	return (0);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	words;
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	words = count(s, c);
	list = malloc((words + 1) * sizeof (char *));
	if (!s || !list)
		return (0);
	while (i < words)
	{
		while (s[o] && s[o] == c)
			o++;
		list[i] = ft_substr(s, o, word_len(&s[o], c));
		if (!list[i])
			return (errorlist(list, i));
		while (s[o] && (s[o] != c))
			o++;
		i++;
	}
	list[i] = NULL;
	return (list);
}
/*
int	main(void)
{
	char *string = "test,bve,cad";
	char c = ',';
	char **list = ft_split(string, c);
	int i = 0;
	while (list[i])
	{
		printf("%s \n", list[i]);
		i++;
	}
	return (0);
 }*/
