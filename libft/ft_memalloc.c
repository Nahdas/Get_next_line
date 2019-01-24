/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:04:01 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 10:45:40 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*zone;
	char	*zone2;
	size_t	i;

	i = 0;
	if (!(zone = (void *)malloc(size)))
		return (NULL);
	zone2 = (char *)zone;
	while (i < size)
	{
		zone2[i] = 0;
		i++;
	}
	zone2[i] = 0;
	return ((void *)zone2);
}
