/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:11:10 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/28 16:07:07 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*pt;
	char			cst;

	pt = (char *)s;
	cst = (char )c;
	while (*pt)
	{
        pt++;
	}
	while (*pt != cst && (*pt != *s))
	{
		pt--;
	}
	if (*pt == cst)
			return (pt);
	else
		return (0);
}
