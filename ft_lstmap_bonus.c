/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:49:02 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/19 18:19:50 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*the_list;
	t_list	*element;

	if ((!lst) || (!f) || (!del))
		return (NULL);
	the_list = NULL;
	element = NULL;
	while (lst != NULL)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&the_list, del);
			return (NULL);
		}
		ft_lstadd_back(&the_list, element);
		lst = lst->next;
	}
	return (the_list);
}
