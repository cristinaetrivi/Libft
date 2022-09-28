/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:11:10 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/28 12:32:14 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	char			*pt;
	char			cst;
    unsigned int	s_len;

	pt = (char *)s;
	cst = (char )c;
    s_len = (unsigned int )(ft_strlen(s));
	while (*pt)
	{
        pt++;
	}
	while (*pt != cst)
	{
        pt--;
	}
	if (*pt == cst)
		return (pt);
	else
		return (0);
}
