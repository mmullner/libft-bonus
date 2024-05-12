/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 03:36:07 by michi             #+#    #+#             */
/*   Updated: 2024/04/28 19:48:01 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*
void	ft_test(unsigned int i, char *st)
{
	*st = *st - 32;
}

int	main(void) {
	char str[] = "hello";

	printf("Original string: %s\n", str);
	ft_striteri(str, ft_test);

	printf("Modified string: %s\n", str);

	return (0);
}
*/
