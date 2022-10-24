/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:56:31 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 14:39:48 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strcp;
	size_t	i;
	size_t	lg;

	i = 0;
	lg = ft_strlen(s);
	if ((lg - start) < len && (lg - start) > 0)
		len = (lg - start);
	if (lg < len)
		len = lg;
	strcp = malloc((len * sizeof(*strcp)) + sizeof(*strcp));
	if (!(strcp))
		return (NULL);
	if (start < lg)
	{
		while (i < len && s[start + i])
		{
			strcp[i] = s[start + i];
			i++;
		}
	}
	strcp[i] = '\0';
	return (strcp);
}
