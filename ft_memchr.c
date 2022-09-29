/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:29:53 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/29 11:02:35 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*pt;
	char	cst;

	i = 0;
	pt = (char *)s;
	cst = (char )c;
	while ((i < n))
	{
		if (*pt == cst)
			return (pt);
		i++;
		pt++;
	}
	return (0);
}