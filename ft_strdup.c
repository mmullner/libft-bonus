/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michi <michi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 00:14:49 by michi             #+#    #+#             */
/*   Updated: 2024/04/28 19:39:37 by michi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;

	s = (char *)malloc(ft_strlen(str) + 1);
	if (!s)
		return (0);
	ft_memcpy(s, str, ft_strlen(str) + 1);
	return (s);
}
