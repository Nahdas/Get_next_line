/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alac <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:30:23 by alac              #+#    #+#             */
/*   Updated: 2018/11/21 15:48:24 by alac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s1_b;
	unsigned char	*s2_b;

	s1_b = (unsigned char *)s1;
	s2_b = (unsigned char *)s2;
	i = 0;
	while (s1_b[i] != 0 || s2_b[i] != 0)
	{
		if (s1_b[i] != s2_b[i])
		{
			return (s1_b[i] - s2_b[i]);
		}
		else
			i++;
	}
	return (0);
}
