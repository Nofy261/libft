/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:09:11 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/08 09:01:47 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	save;
	size_t	j;

	save = 0;
	if (little[save] == '\0')
		return ((char *)big);
	if (big == NULL && len <= 0)
		return ((char *)big);
	while (big[save] && save < len)
	{
		j = 0;
		while (big[save + j] == little[j])
		{
			if (save + j >= len)
				break ;
			if (little[j + 1] == '\0')
				return ((char *)&big[save]);
			j++;
		}
		save++;
	}
	return (NULL);
}
