/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:26:09 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/27 14:26:12 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hy, const char *needle, size_t len)
{
	size_t	i;
	size_t	len2;

	i = 0;
	len2 = ft_strlen(needle);
	if (len2 == 0)
		return ((char*)hy);
	while (hy[i] && len2 <= len--)
	{
		if (ft_memcmp(hy + i, needle, len2) == 0)
			return ((char *)hy + i);
		i++;
	}
	return (NULL);
}
