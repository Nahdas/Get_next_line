/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:10:10 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 10:21:10 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *copy;
	t_list *first;
	t_list *modif;

	if (!(lst && f))
		return (NULL);
	modif = f(lst);
	if (!(copy = ft_lstnew(modif->content, modif->content_size)))
		return (NULL);
	first = copy;
	lst = lst->next;
	while (lst != NULL)
	{
		modif = f(lst);
		if (!(copy->next = ft_lstnew(modif->content, modif->content_size)))
			return (NULL);
		copy = copy->next;
		lst = lst->next;
	}
	return (first);
}
