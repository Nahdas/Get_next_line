/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:05:14 by alac              #+#    #+#             */
/*   Updated: 2018/11/16 09:54:35 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void			ft_strclr(char *s)
{
	int i;
	int len;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i <= len)
		{
			s[i] = 0;
			i++;
		}
	}
}
