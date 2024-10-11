/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:06:57 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/11 15:15:48 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t count_words(const char *s, char c)
{
    size_t  i;
    size_t  counter;
    size_t is_word = 0;//je ne suis pas dans un mot

    i = 0;
	counter = 0;
    while (s[i])
    {
		if ((s[i] != c))// si le caractere n'est pas le delimiteur
        {
            if (is_word == 0) //je rentre dans un mot
            {
                counter++; //je compte le mot 
                is_word = 1;//je ne suis plus dans un mot
            }
	}
        else
        {
            is_word = 0;//je ne suis pas dans un mot
        }
        i++;
    }
    return (counter);
}


static void	fill_tab(char *new, char const *s, char c) // On prend un mot et on le met dans un tableau
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
}

static void	set_mem(char **tab, char const *s, char c)
{
	size_t	count;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (s[j])
	{
		count = 0;
		while (s[j + count] && s[j + count] != c)
			count++;
		if (count > 0)
		{
			tab[i] = malloc(sizeof(char) * (count + 1));
			if (!tab[i])
				return ;
			fill_tab(tab[i], (s + j), c);
			i++;
			j = j + count;
		}
		else
			j++;
	}
	tab[i] = 0;// '\0';
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	set_mem(tab, s, c);
	return (tab);
}
#include <stdio.h>

int main(void)
{
	char tab[] = "Bonjour les amis";
	char c = ' ';
	char **result;
	int i;

	i = 0;
	result = ft_split(tab, c);
	while (i < 3)
	{	
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}

