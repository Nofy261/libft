#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *result;
    unsigned int i;
    unsigned int    j;

    i = start - 1;
    j = 0;
    result = malloc(sizeof(char) * len + 1);
    if (!result)
        return (NULL);
    while (s[i] != '\0')
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
    char const s[] = "Bonjour";
    unsigned int start = 4;
    size_t len = 4;

    result = ft_substr(s, start, len);
    printf("%s\n", result);
    free(result);
}
