/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:45:12 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 10:01:09 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	start2;
	int		i;

	if (s)
	{
		start2 = (size_t)start;
		i = 0;
		if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (start2 < len + (size_t)start)
		{
			copy[i] = s[start2];
			i++;
			start2++;
		}
		copy[i] = '\0';
		return (copy);
	}
	else
		return (NULL);
}
