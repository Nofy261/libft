/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:49:20 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/14 15:56:34 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list// A ENLEVER
{
	void			*content;
	struct s_list	*next;
}				t_list;

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	lst->content = "Hello";
	lst->next = malloc(sizeof(t_list));
	lst->next->content = "World";
	lst->next->next = NULL;
	printf("%d\n", ft_lstsize(lst));
}
