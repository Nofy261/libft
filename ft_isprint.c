/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 07:52:19 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/08 11:53:37 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}


