/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 01:29:42 by michi             #+#    #+#             */
/*   Updated: 2024/04/28 19:40:33 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_s;
	size_t	len;
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		len = (sizeof(char) * ft_strlen(s1)) + (sizeof(char) * ft_strlen(s2))
			+ 1;
		final_s = malloc(len);
		if (!final_s)
			return (NULL);
		while (i < len)
		{
			if (*s1 != '\0')
				final_s[i] = (char)*s1++;
			else if (*s2)
				final_s[i] = (char)*s2++;
			else
				final_s[i] = '\0';
			i++;
		}
		return (final_s);
	}
	return (NULL);
}

/*
int main ()
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "hallo ";
	s2 = "welt";
	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
	return (0);
}
*/
