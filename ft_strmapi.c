#include <stdlib.h>

static int  ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int    i;
    char    *result;

    if (!s)
	return (NULL);
    i = 0;
    result = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!result)
        return (NULL);
    while (s[i])
    {
        result[i] = f(i,s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

char f(unsigned int i, char c)
{
    if (i == 0)//transforme en M le caractere qui se trouve a l index 0 
        return ('M');
    return (c);
}

#include <stdio.h>

int main(void)
{
    char s[] = "Bonjour";
    char *result;

    result = ft_strmapi(s, f);
    printf("%s\n", result);
    free (result);
}
