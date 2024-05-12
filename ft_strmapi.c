/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 03:15:59 by michi             #+#    #+#             */
/*   Updated: 2024/04/28 19:41:41 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to collect the
results from the successive applications of */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = (malloc((sizeof(char) * ft_strlen(s) + 1)));
	if (!str)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
static char	test_function(unsigned int i, char c)
{
	printf("%d ist %c \n", i,c);
	return (c - 32);
}

int	main(void)
{
	char const	*str;

	str = "test";
	printf ("test wird zu %s \n", ft_strmapi(str, test_function));
	return (0);
}
*/
