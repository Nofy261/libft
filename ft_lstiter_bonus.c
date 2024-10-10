/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:48:07 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/08 10:53:56 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if ((!lst) || (!f))
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
