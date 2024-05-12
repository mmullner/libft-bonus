/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:51:10 by codespace         #+#    #+#             */
/*   Updated: 2024/04/28 19:50:05 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// used to fill a block of memory with a specified byte value.
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*pnt;

	pnt = (unsigned char *)str;
	while (n > 0)
	{
		*pnt = c;
		pnt++;
		n--;
	}
	return (str);
}
