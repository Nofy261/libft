/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:49:02 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/19 18:03:26 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *to_upper(void *content)
{
    char    *str;
    int        i;

    str = (char *)content;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (content);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*tmp;
	
	if ((!del) || (!(*lst)))
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
void    del(void *content)
{
    free(content); 
}

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
		element = ft_lstnew(f(lst->element));
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
#include <stdio.h>

int main(void)
{
	t_list	*ptr;
	ptr = NULL;

	t_list	*node1;
	t_list	*node1;
	t_list	*node1;
	
	char	content1


	
}
