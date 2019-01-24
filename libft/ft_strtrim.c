/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:59:02 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 10:02:26 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static	char	*ft_alloc(char const *s, int post, int pre)
{
	int		i;
	int		k;
	char	*copy;

	i = ft_strlen(s);
	if (!(copy = (char *)malloc(sizeof(char) * (i - pre - post + 1))))
		return (NULL);
	k = 0;
	i = ft_strlen(s) - post;
	while (pre < i)
	{
		copy[k] = s[pre];
		pre++;
		k++;
	}
	copy[k] = '\0';
	return (copy);
}

static	char	*ft_empty(void)
{
	char	*copy;

	if (!(copy = (char *)malloc(sizeof(char) * (1))))
		return (NULL);
	copy[0] = '\0';
	return (copy);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		pre;
	int		post;

	i = 0;
	pre = 0;
	post = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		pre++;
		i++;
	}
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		post++;
		i--;
	}
	if (post == pre && ++i == 0)
		return (ft_empty());
	return (ft_alloc(s, post, pre));
}
