/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:19:04 by michi             #+#    #+#             */
/*   Updated: 2024/04/28 19:45:47 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t		dest_len;
	size_t		len;
	const char	*s;

	if ((!dest && !dsize) || (!src && !dsize))
		return (0);
	s = src;
	dest_len = 0;
	while (*(dest + dest_len) && dest_len < dsize)
		dest_len++;
	if (dest_len < dsize)
		len = dest_len + ft_strlen(s);
	else
		return (dsize + ft_strlen(s));
	while (*s && (dest_len + 1) < dsize)
		*(dest + dest_len++) = *s++;
	*(dest + dest_len) = '\0';
	return (len);
}
