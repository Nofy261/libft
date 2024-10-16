/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:09:24 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/15 11:07:52 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > 0 && ft_strrchr(set, s1[j - 1]))
		j--;
	result = ft_substr(s1, i, j - i);
	if (!result)
		return (NULL);
	return (result);
}
