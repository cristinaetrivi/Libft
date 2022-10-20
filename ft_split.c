/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:26:44 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/20 18:24:33 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_ele(char const *s, char c)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				y++;
		}
		i++;
	}
	return (y);
}

static void	ft_put_strs(char const *s, char c, char **words)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				start = i;
		}
		if (i != 0 && s[i] == c && s[i - 1] != c)
		{
			*words = ft_substr(s, start, i - start);
			words++;
		}
		i++;
	}
	if (i > 0 && s[i - 1] != c)
	{
		*words = ft_substr(s, start, i - start);
		words++;
	}
	*words = NULL; 
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		a;

	a = ft_nb_ele(s, c);
	/*if (s && s[0] == '\0')
	{
		words = (char **)malloc(sizeof(char *) + 1);
		words[0] = NULL;
		return (words);
	}*/ 
	words = (char **)malloc((a + 1)* sizeof(char *));
	// if (ft_nb_ele(s, c) == 2)
	// {
	// 	free(words);
	// 	words = (char **)malloc(a * sizeof(char *));
	// }
	if (!words)
	{
		return (NULL);
	}
	ft_put_strs(s, c, words);
	return (words);
}