/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:26:44 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/07 12:11:16 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_ele(char const *s, char c)
{
	int	i;
	
	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		y;
	int		cr;
	struct arstr
	{
		
	};
	

	i = 0;
	y = 0;
	cr = 0;
	while (*s)
	{
		if (*s == c)
		{
			arrsrr[i] = malloc((y + 1) * sizeof(char));
			i++;
			while (y >= 0 && *arrsrr[i])
			{
				arrsrr[i] = s[cr];
				cr++;
				arrsrr[i]++;
				y--;
			}
		}
		s++;
		y++;
	}
	return (arrsrr);
}