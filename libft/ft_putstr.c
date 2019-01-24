/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:19:35 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 10:04:58 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static	void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char const *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			ft_putchar((char)str[i]);
			i++;
		}
	}
}
