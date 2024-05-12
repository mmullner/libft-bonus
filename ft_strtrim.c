/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 00:13:51 by michi             #+#    #+#             */
/*   Updated: 2024/04/30 12:50:52 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/

static int	ft_char_isset(char c, char const *set)
		//*set contains the characts that should be removed
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ende;
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1 && ft_char_isset(*s1, set))
		s1++;
	ende = ft_strlen(s1);
	while (ende > 0 && ft_char_isset(s1[ende - 1], set))
		ende--;
	str = (char *)malloc((sizeof(char) * ende) + 1);
	if (!str)
		return (0);
	while ((ende) > i && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*str;

	str = "";
	printf("%s", ft_strtrim(str,"123"));
	return (0);
}
*/
