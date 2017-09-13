/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:30:37 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/27 14:30:40 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_trmlen(char *s)
{
	size_t			i;
	size_t			spac;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	spac = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i--;
			spac++;
		}
	}
	return (len - spac);
}

char				*ft_strtrim(char const *s)
{
	char			*str;
	size_t			i;
	size_t			a;
	size_t			trmln;

	i = 0;
	a = 0;
	if (!s)
		return (NULL);
	trmln = ft_trmlen((char *)s);
	str = (char *)malloc(sizeof(*str) * (trmln + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (a < trmln)
	{
		str[a] = s[i];
		a++;
		i++;
	}
	str[a] = '\0';
	return (str);
}
