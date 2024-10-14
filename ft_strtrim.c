/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:09:24 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/08 09:23:54 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char		*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tab)
	{
		while (s[i])
		{
			tab[i] = s[i];
			i++;
		}
		tab[i] = '\0';
	}
	return ((char *)tab);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurence;

	i = 0;
	last_occurence = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last_occurence = (char *)(s + i);
		}
		i++;
	}
	if (s[i] == (char)c)
		last_occurence = (char *)(s + i);
	return (last_occurence);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tab;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	j = ft_strlen(s + start);
	if (j < len)
		len = j;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	if (s1[0] == '\0')
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
