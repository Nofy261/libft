/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:06:57 by nolecler          #+#    #+#             */
/*   Updated: 2024/10/12 12:28:39 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t count_words(const char *s, char c)//static = la fonction ne peut etre appelee que dans ce fichier
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


static void	fill_result(char *new, char const *str, char c) // On prend un mot et on le met dans un tableau
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
}

static void	set_mem(char **result, char const *str, char sep)//remplit result et alloue de la memoire pour chaque mot
{
	size_t	count;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (str[j])
	{
		count = 0;//on initialise count a 0 car on compte un nouveau mot 
		while (str[j + count] && str[j + count] != sep)// D abord on compte le nombre de lettre dans un mot
			count++;// count prend 1 
		if (count > 0)  
		{
			result[i] = malloc(sizeof(char) * (count + 1));//puis on alloue de la memoire pour un mot + '\0'
			if (!result[i])
				return ;
			fill_result(result[i], (str + j), sep);//on remplit result avec les lettres de str a l index de j
			i++;// on passe a l index suivant de result cad un nouveau mot
			j = j + count;//on avance a la position suivante dans la chaine str
		}
		else
			j++;//on passe a un nouveau mot 
	}
	result[i] = 0;// fin de tableau de chaine de caractere et non '\0'
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;//ptr vers un tab de ptr de caract

	words = count_words(s, c);//nombre de mots dans s 
	result = malloc(sizeof(char *) * (words + 1));//j'alloue de la memoire pour char ** cad le tableau de tableau
	if (!result)
		return (NULL);
	set_mem(result, s, c);
	return (result);
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

