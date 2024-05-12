/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 02:36:47 by michi             #+#    #+#             */
/*   Updated: 2024/04/29 00:25:04 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/

#include "libft.h"

static size_t	count_digits(int d)
{
	size_t	i;

	i = 1;
	d = d / 10;
	while (d)
	{
		d = d / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		digits;
	long int	num;

	num = n;
	digits = count_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	str[digits--] = 0;
	while (digits + 1)
	{
		str[digits] = num % 10 + '0';
		num = num / 10;
		digits--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*
int	main(void)
{
	int		num;
	char	*snum;

	num = -12345;
	snum = ft_itoa(num);
	printf("%s \n", snum);
	return (0);
}
*/
