/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:13:26 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 15:19:15 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr(int n)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		a;
	long	nbr;

	nbr = n;
	if (nbr == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	a = ft_nbr(n) - 1;
	while (nbr > 0)
	{
		a--;
		str[a] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	str[ft_nbr(n) - 1] = '\0';
	write(fd, str, ft_strlen(str));
}
