/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:47:58 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/08 10:40:00 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((!del) || (!lst))
		return ;
	del(lst->content);
	free(lst);
}
