/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:04:22 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 09:16:59 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dst2;
	const char	*src2;
	char		c2;

	dst2 = dst;
	src2 = src;
	c2 = (char)c;
	if (n == 0)
		return (NULL);
	i = -1;
	while (++i < n)
	{
		if (src2[i] != c2)
			dst2[i] = src2[i];
		else
		{
			dst2[i] = c2;
			if (i + 1 <= n)
				return (&dst[i + 1]);
		}
	}
	return (NULL);
}
