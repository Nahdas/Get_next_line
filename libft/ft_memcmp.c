/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:07:16 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 09:20:34 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char *t1;
	const unsigned char *t2;

	if (s1 == NULL && s2 == NULL)
		return (0);
	t1 = s1;
	t2 = s2;
	i = 0;
	if (t2[0] == '\0' && t1[0] == '\0')
		return (0);
	while (i < n)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		else
			i++;
	}
	return (0);
}
