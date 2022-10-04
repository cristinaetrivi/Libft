/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:56:31 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/04 13:17:40 by ctrivino         ###   ########.fr       */
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
	if (lg < len)
		strcp = malloc((lg * sizeof(*strcp)) + sizeof(*strcp));
	else if (((lg - start) < (len - 1)) && (len > 0))
		strcp = malloc(((lg - start) * sizeof(*strcp)) + sizeof(*strcp));
	else
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
