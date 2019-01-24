/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:37:48 by alac              #+#    #+#             */
/*   Updated: 2018/11/22 11:02:27 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list *actual;

	if (alst && del)
	{
		actual = (*alst);
		while (actual != NULL)
		{
			next = actual->next;
			del(actual->content, actual->content_size);
			free(actual);
			actual = next;
		}
		*alst = NULL;
	}
}
