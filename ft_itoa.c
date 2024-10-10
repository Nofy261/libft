/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:46:35 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/09 16:19:25 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *str, int n, size_t len)
{
	size_t	i;

	i = 0;
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i = 1;
	}
	while (len > i)
	{
		len--;
		str[len] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	len = count_len(n);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	fill_str(result, n, len);
	return (result);
}
