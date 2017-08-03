/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:34:59 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/25 13:35:05 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	index;
	size_t	len_one;
	size_t	len_two;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	index = 0;
	len_one = ft_strlen(s1);
	len_two = ft_strlen(s2);
	if ((result = (char *)ft_memalloc(len_one + len_two + 1)) == NULL)
	{
		return (NULL);
	}
	ft_strcpy(result, s1);
	ft_strcat(result, s2);
	return (result);
}
