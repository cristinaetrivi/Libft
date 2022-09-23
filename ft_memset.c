/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:24:34 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/21 19:44:29 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void	*b, int c, unsigned int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
