/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:50:04 by alac              #+#    #+#             */
/*   Updated: 2018/11/22 19:37:48 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_sl(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	int		i;
	int		j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (!(copy = (char *)malloc(sizeof(char) * (ft_sl(s1) + ft_sl(s2) + 1))))
		return (NULL);
	while (s1[i])
	{
		copy[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		copy[j] = s2[i];
		i++;
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
