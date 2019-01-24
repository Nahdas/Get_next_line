/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:26:58 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 10:04:16 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		*ft_pos(int n)
{
	int		cp;
	char	*str;
	int		i;
	int		len;

	cp = n;
	i = 1;
	while (cp >= 10)
	{
		cp = cp / 10;
		i++;
	}
	len = i;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i-- >= 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	str[len] = '\0';
	return (str);
}

static char		*ft_one_neg(int n)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * 3)))
		return (NULL);
	str[0] = '-';
	str[1] = -n + '0';
	str[2] = '\0';
	return (str);
}

static char		*ft_neg(int n)
{
	char	*str;
	int		cp;
	int		i;
	int		len;

	n = -n;
	cp = n;
	i = 1;
	while (cp >= 10)
	{
		cp = cp / 10;
		i++;
	}
	len = i;
	if (!(str = (char *)malloc(sizeof(char) * (len + 2))))
		return (NULL);
	i++;
	while (i-- > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	str[0] = '-';
	str[len + 1] = '\0';
	return (str);
}

static char		*ft_one_pos(int n)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	str[0] = n + '0';
	str[1] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	char	*min;

	min = "-2147483648\0";
	if (n == -2147483648)
	{
		if (!(str = (char *)malloc(sizeof(str) * 12)))
			return (NULL);
		i = -1;
		while (++i < 12)
			str[i] = min[i];
		return (str);
	}
	if (n <= 9 && n >= 0)
		return (ft_one_pos(n));
	if (n >= -9 && n < 0)
		return (ft_one_neg(n));
	if (n < -9)
		return (ft_neg(n));
	if (n >= 10)
		return (ft_pos(n));
	if (n <= -10)
		return (ft_neg(n));
	return (NULL);
}
