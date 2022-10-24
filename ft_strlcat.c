/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:38:32 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 18:35:52 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lg;
	size_t	i;
	size_t	lg_src;

	i = 0;
	lg = ft_strlen(dst);
	lg_src = ft_strlen(src);
	if (dstsize <= lg)
		return (dstsize + lg_src);
	while (src[i] != '\0' && i < dstsize - lg - 1)
	{
		dst[lg + i] = src[i];
		i++;
	}
	dst[lg + i] = '\0';
	return (lg + lg_src);
}
