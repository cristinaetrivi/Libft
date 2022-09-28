/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:10:09 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/28 12:10:20 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*pt;
	char	cst;

	pt = (char *)s;
	cst = (char )c;
	while (*pt)
	{
		if (*pt == cst)
			return (pt);
		pt++;
	}
	if (*pt == cst)
		return (pt);
	else
		return (0);
}
