/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:47:22 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 18:34:25 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strcp;
	size_t	lg;
	size_t	i;

	i = 0;
	lg = ft_strlen(s);
	strcp = malloc((lg * sizeof(*strcp)) + sizeof(*strcp));
	if (!(strcp))
	{
		return (NULL);
	}
	while (i < lg)
	{
		strcp[i] = s[i];
		i++;
	}
	strcp[lg] = '\0';
	return (strcp);
}
