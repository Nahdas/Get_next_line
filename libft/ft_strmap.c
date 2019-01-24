/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:14:49 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 09:57:24 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char				*ft_strmap(char const *s, char (*f)(char))
{
	char	*copy;
	int		i;
	int		len;

	if (s && f != NULL)
	{
		len = ft_strlen(s);
		if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			copy[i] = f(s[i]);
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	else
		return (NULL);
}
