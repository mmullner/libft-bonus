/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 00:05:31 by michi             #+#    #+#             */
/*   Updated: 2024/04/30 13:34:44 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*calloc is like mallco but does not set the memory to zero*/

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*dest;

	if (nitems != 0 && (nitems * size) / nitems != size)
		return (NULL);
	dest = malloc(size * nitems);
	if (!dest)
		return (NULL);
	ft_bzero (dest, (size * nitems));
	return (dest);
}
