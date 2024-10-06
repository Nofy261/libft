#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	save;
	size_t	j;

	save = 0;
	if (little[save] == '\0')// si little est vide, on renvoie big car rien a chercher
		return ((char *)big);
	if (big == NULL && len <= 0) // !len 
		return ((char *)big); // cad null ? 
	while (big[save] && save < len)
	{
		j = 0;
		while (big[save + j] == little[j])// si le 1er caractere a chercher a ete trouver, big[save+j] permet de garder save a la premiere occurence trouvé
		{ 
			if (save + j >= len) // si len depasse big 
				break ;//on sort de la grande boucle et on renvoie null
			if (little[j + 1] == '\0')// si on a atteint la fin de chaine little 
				return ((char *)&big[save]);
			j++;
		}
		save++;
	}
	return (NULL);
}
