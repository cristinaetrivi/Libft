/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:57:01 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/18 13:27:06 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*aux;
	unsigned int	i;

	aux = (char *)s;
	i = 0;
	str = malloc((ft_strlen(s)+1)*sizeof(*str));
	if (!str)
		return (NULL);
	while(aux[i])
	{
		str[i] = f(i, aux[i]);
		i++;	
	}
	str[i] = '\0'; 
	return (str);
}