/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:36:51 by ctrivino          #+#    #+#             */
/*   Updated: 2022/10/24 17:50:14 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_result;
	t_list	*aux;

	if (!lst || !f)
		return (0);
	lst_result = ft_lstnew(f(lst->content));
	aux = lst_result;
	lst = lst -> next;
	while (lst)
	{
		aux->next = ft_lstnew(f(lst->content));
		if (!(aux -> next))
		{
			ft_lstclear(&lst_result, del);
			return (0);
		}
		aux = aux->next;
		lst = lst->next;
	}
	return (lst_result);
}
