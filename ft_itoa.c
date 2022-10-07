/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:25:12 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/07 16:32:23 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr(int n)
{
	int i = 1;

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
	int		lg;
	int		a;

	lg = ft_nbr(n);
	
	if (n < 0)
	{
		lg = lg + 1;
		str = malloc((lg + 1) * sizeof(*str));
		str[0] = '-';
		n = n * -1;
	}
	if (n > 0)
		str = malloc((lg + 1) * sizeof(*str));
	/*else
		return (NULL);*/
	a = lg;
	while (a > 0)
	{
		a--;
		if (a == 0 && str[a] == '-')
          break ;
		str[a] = (n % 10) + '0';
		n = n / 10;
	}
	str[lg + 1] = '\0';
	return (str);
}
