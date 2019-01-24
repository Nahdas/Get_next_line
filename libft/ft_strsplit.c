/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:15:45 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 10:03:20 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_countletters(const char *s, char sym)
{
	int i;

	i = 0;
	while (s[i] != sym && s[i] != 0)
		i++;
	return (i);
}

static int		ft_strlens(const char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

static int		ft_cw(const char *s, char sym)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i <= ft_strlens(s))
	{
		if ((s[i] == sym || s[i] == '\0') && (s[i - 1] != sym))
			count++;
		i++;
	}
	return (count);
}

static char		**ft_allocation(char const *s, char c, char **tab)
{
	int		i;
	int		j;
	int		k;
	int		len;

	i = -1;
	j = 0;
	k = 0;
	len = 0;
	while (++i < ft_strlens(s))
	{
		if (s[i] != c && s[i] != '\0')
		{
			len = ft_countletters(&s[i], c);
			if (!(tab[j] = (char *)malloc(sizeof(char) * (len + 1))))
				return (NULL);
			while (k < len)
				tab[j][k++] = s[i++];
			tab[j][k] = 0;
			k = 0;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char **tab;

	if (s == NULL)
	{
		tab = NULL;
		return (tab);
	}
	if (!(tab = (char **)malloc(sizeof(tab) * (ft_cw(s, c) + 1))))
		return (NULL);
	return (ft_allocation(s, c, tab));
}
