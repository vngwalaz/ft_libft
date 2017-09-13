/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vngwalaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:27:24 by vngwalaz          #+#    #+#             */
/*   Updated: 2017/07/27 14:27:26 by vngwalaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_lst;
	t_list		*prev_lst;

	if (!(lst))
		return (NULL);
	new_lst = ft_lstnew(lst->content, lst->content_size);
	if (!(new_lst))
		return (NULL);
	new_lst = f(lst);
	prev_lst = new_lst;
	while (lst->next)
	{
		prev_lst->next = f(lst->next);
		prev_lst = prev_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
