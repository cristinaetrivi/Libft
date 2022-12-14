/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:25:08 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 13:11:36 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	f;
	int	nb;
	int	ng;

	nb = 0;
	i = 0;
	f = 0;
	ng = 1;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
	{
		i++;
	}
	if (s[i] == 45 || s[i] == 43)
	{
		if (s[i] == 45)
			ng = ng * (-1);
		i++;
	}
	while (ft_isdigit(s[i]) == 1)
	{
		nb = nb * 10 + ((s[i]) - '0');
		i++;
	}
	return (nb * ng);
}
