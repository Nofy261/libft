/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:47:39 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/17 12:54:21 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int main(void)
{
	t_list	*ptr;
	ptr = NULL;

	t_list	*node1;
	t_list	*node2;

	char content1[] = "contenu du 1er maillon";
	char content2[] = "contenu du 2eme maillon";

	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);

	ft_lstadd_front(&ptr,node1);
	ft_lstadd_front(&ptr, node2);

	printf("1er de la liste et dernier ajouter %s\n", (char *)ptr->content);
	printf("2e position et premier ajouter %s\n", (char *)ptr->next->content);
	
	return (0);
}