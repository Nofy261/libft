/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:09:30 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/14 17:52:49 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);    
}


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *result;
    unsigned int i;
    unsigned int    j;
    

    i = start;
    j = 0;
    
    //if (ft_strlen(s) - start < len)//s'assure qu'on ne dépasse pas la fin de la chaîne s lorsque on crée la sous-chaîne.
    // len = ft_strlen(s);
    //if (start >= ft_strlen(s))
     //   return (strdup(""));
    result = malloc(sizeof(char) * len + 1);
    if (!result)
        return (NULL);
    while (s[i] && j < len)
    {       
        result[j] = s[i];
        j++;
        i++;
    }
    result[j] = '\0';  
    return (result);
}

#include <stdio.h>

int main(void)
{
    char *result;
    char const s[] = "Hello World!";
    unsigned int start = 20;
    size_t len = 5;

    result = ft_substr(s, start, len);
    printf("%s\n", result);
    free(result);
}
