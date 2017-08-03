/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:29:20 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/27 14:29:22 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int index;
	int len;

	i = 0;
	index = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[index] == haystack[index + i])
		{
			if (index == len - 1)
				return ((char*)(haystack + i));
			index++;
		}
		index = 0;
		i++;
	}
	return (0);
}
