
static size_t	count_words(char const *s, char c)//size_t = non negative, peut contenir de tres grandes valeurs
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	fill_tab(char *new, char const *s, char c)//copie un mot dans s vers un nouveau tableau new 
{
	size_t	i;                                  // new doit avoir suffisament de memoire allouer pour accueillir la copie

	i = 0;
	while (s[i] && s[i] != c) //on copie s dans new jusqu a ce que i = c le delimitateur, quand i = c on arrete la copie 
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';//new contient maintenant un mot et on marque la fin du mot par '\0';
}

static void	set_mem(char **tab, char const *s, char c)
{
	size_t	count;
	size_t	index;
	size_t	i;

	index = 0;
	i = 0;
	while (s[index])
	{
		count = 0;
		while (s[index + count] && s[index + count] != c)
			count++;
		if (count > 0)
		{
			tab[i] = malloc(sizeof(char) * (count + 1));
			if (!tab[i])
				return ;
			fill_tab(tab[i], (s + index), c);
			i++;
			index = index + count;
		}
		else
			index++;
	}
	tab[i] = 0;
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
