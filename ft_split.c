/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:26:44 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/18 16:09:50 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	ft_nb_ele(char const *s, char c)
{
	int	i;
	
	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*s_aux;
	char	**str;

	i = 0;
	s_aux = (char *)s;
	*str = malloc((ft_nb_ele(s_aux)) * sizeof(int));
	if (!*str)
		return (NULL);
	while (*s_aux)
	{
		str[i] = ft_strchr(s_aux, c);
		s_aux++;
		i++;
	}
	return (str);
}*/