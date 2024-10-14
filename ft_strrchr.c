/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:09:18 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/14 17:45:55 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)//seg fault quand je mets printf dans le main
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int main(void)
{
	const char s[] = "Bnjur";
	int c = 111;
 	char *s2 = ft_strrchr(s, c);
	printf("%s\n", s2);
	printf("%s\n", strrchr(s, c));
	return (0);
}
