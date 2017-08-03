/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:39:14 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/27 14:24:04 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!f || !s)
		return (NULL);
	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (str)
	{
		while (s[i])
		{
			str[i] = f(i, (char)s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
