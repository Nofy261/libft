/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:08:37 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/08 08:47:32 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dstsize;
	size_t	srcsize;
    i = 0;
    
	if (!dest && !size)
		return (0);
	dstsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (dstsize >= size)
		return (srcsize + size);
	if (!size)
		return (srcsize);
	while (src[i] != '\0' && dstsize + i < size - 1)
	{
		dest[dstsize + i] = src[i];
		i++;
	}
	dest[dstsize + i] = '\0';
	return (srcsize + dstsize);
}
