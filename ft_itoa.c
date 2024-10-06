#include <stdlib.h>

//on compte le nombre de chiffres
static size_t  count_len(int n)
{
    size_t  len;

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

//on remplit le tableau tout en convertissant les entiers en chaine de caractere
static void fill_str(char *str, int n, size_t len)
{
    size_t  i;

    i = 0;
    str[len] = '\0';
    if (n < 0)
    {
        str[0] = '-';
        i = 1;
    }
    while (len > i)
    {
        len--;
        if (n < 0)
        {
            str[len] = n % 10 * (-1) + '0';
            n = n / 10; 
        }
        else
        {
            str[len] = n % 10 + '0';
            n = n / 10;
        }
    }
}

char    *ft_itoa(int n)
{
    char    *result;
    size_t  len;

    len = count_len(n);
    result = malloc(sizeof(char) * len + 1);
    if (!result)
        return (NULL);
    fill_str(result, n, len);
    return (result);
}

#include <stdio.h>

int main(void)
{
    char    *tab;

    tab = ft_itoa(+-+12345); //donne -12345
    printf("%s\n", tab);
    free (tab);
    return (0);
}