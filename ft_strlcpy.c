/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:09:32 by ctrivino          #+#    #+#             */
/*   Updated: 2022/09/21 16:49:30 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char	*dst, const char	*src, unsigned int size)
{
	unsigned long	i;

	i = 0;

	while ((i < (size-1) && i < ft_strlen(src)))
	{
		dst[i] = src[i];
		i++;
	}

	return (ft_strlen(src));
	//else
	//	return (ft_strlen(src));
}
