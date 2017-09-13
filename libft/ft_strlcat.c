/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:35:57 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/09/13 13:11:29 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t src_size;
	size_t dest_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen((char *)src);
	if (dest_size > n)
		return (src_size + n);
	else
		ft_strncat(dest, src, n - dest_size - 1);
	return (dest_size + src_size);
}
