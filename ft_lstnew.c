/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:36:44 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/23 14:02:40 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (new);
	new -> content = content;
	new -> next = (t_list *)(void *)0;
	return (new);
}

/*int main()
{
	t_list *b;
	t_list *c;
	int nb[] = {52, 37, 89};

	b = ft_lstnew("hola");
	c = ft_lstnew(nb);
	printf("1 %s\n", b ->content);
	printf("1 %p\n", &(b -> content));
	printf("1 %d\n", ((int *)c ->content)[1]);
	printf("1 %p\n", &(c -> content));
}*/