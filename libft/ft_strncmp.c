/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:40:46 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/25 13:40:50 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t length)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	int					index;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	index = 0;
	while ((str1[index] != '\0' || str2[index] != '\0') && length > 0)
	{
		if (str1[index] != str2[index])
			return (str1[index] - str2[index]);
		index++;
		length--;
	}
	return (0);
}
