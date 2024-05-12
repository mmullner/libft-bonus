/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:40:32 by michi             #+#    #+#             */
/*   Updated: 2024/04/30 12:46:56 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t slen)
{
	size_t	find_len;
	size_t	i;

	find_len = ft_strlen(little);
	if (find_len == 0)
		return ((char *)big);
	if (!big && !little)
		return (0);
	i = 0;
	while (i < slen && big[i] != 0)
	{
		if (ft_strncmp((char *)&big[i], little, find_len) == 0)
		{
			if (i + find_len > slen)
				return (0);
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
