/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:08:28 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/07 13:08:29 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

size_t  ft_strlen(char const *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *result;
    size_t  i;
    size_t  j;
    size_t  k;
    size_t  lentotal;

    k = 0;
    i = ft_strlen(s1);
    j = ft_strlen(s2);
    lentotal = i + j;
    result = malloc(sizeof(char) * lentotal + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        result[k] = s1[i];
        i++;
        k++;
    }
    j = 0;
    while (s2[j])
    {
        result[k] = s2[j];
        j++;
        k++;
    }
    result[k] = '\0';
    return (result);
}

#include <stdio.h>

int main(void)
{
    char const s1[] = "bonjour";
    char const s2[] = " madame et monsieur ";
    char *result;

    result = ft_strjoin(s1, s2);
    printf("%s\n", result);
    free (result);
    return (0);
}