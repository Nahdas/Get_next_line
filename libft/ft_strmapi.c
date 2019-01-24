/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:23:32 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 09:58:58 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int			ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*copy;
	unsigned int	i;
	int				len;

	if (s && f != NULL)
	{
		len = ft_strlen(s);
		if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		i = 0;
		while (s[i])
		{
			copy[i] = f(i, s[i]);
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	else
		return (NULL);
}
