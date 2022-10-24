/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:25:12 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 18:32:19 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sd_nbr(int n)
{
	int	i;

	i = 2;
	if (n < 0)
		i = 3;
	while (n / 10 != 0)
	{
		if (n / 10 == 0)
			break ;
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		a;
	long	nbr;

	nbr = n;
	str = malloc((sd_nbr(n)) * sizeof(*str));
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	a = sd_nbr(n) - 1;
	while (nbr > 0)
	{
		a--;
		str[a] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	str[sd_nbr(n) - 1] = '\0';
	return (str);
}
