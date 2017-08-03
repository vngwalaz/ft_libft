/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:31:49 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/27 14:31:51 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *d;

	d = (char*)malloc(ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	d = ft_strcpy(d, s);
	return (d);
}
