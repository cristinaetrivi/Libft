/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:11:10 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/28 13:01:09 by ctrivino         ###   ########.fr       */
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
	if (*pt == cst)
		return (pt);
	while (*pt)
	{
		if (*pt == cst)
			return (pt);
        pt--;
	}
	if (*pt == cst)
		return (pt);
	else
		return (0);
}
