/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:47:49 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/08 10:45:41 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*tmp;

	if ((!del) || (!*lst))
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
