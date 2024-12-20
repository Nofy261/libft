/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:08:37 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/23 10:34:10 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dstsize;
	size_t	srcsize;

	dstsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (!dest)
		return (srcsize);
	if (dstsize >= size)
		return (srcsize + size);
	i = 0;
	while (src[i] != '\0' && dstsize + i < size - 1)
	{
		dest[dstsize + i] = src[i];
		i++;
	}
	dest[dstsize + i] = '\0';
	return (srcsize + dstsize);
}
