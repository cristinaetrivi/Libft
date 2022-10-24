/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:07:42 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 15:22:57 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char	*s);

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t		i;
	size_t		y;
	size_t		count;

	i = 0;
	if (((char *)neddle)[i] == '\0')
		return ((char *)haystack);
	while (i < len && ((char *)haystack)[i])
	{
		y = 0;
		count = 0;
		while (((char *)neddle)[y] && (i + y) < len &&
				((char *)haystack)[i + y] == ((char *)neddle)[y])
		{
			count++;
			if (count == ft_strlen(((char *)neddle)))
				return (&((char *)haystack)[i]);
			y++;
		}
		i++;
	}
	return (0);
}
