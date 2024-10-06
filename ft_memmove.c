#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *d;
    char    *s;
    size_t  i;

    d = (char *)dest;
    s = (char *)src;
    i = 0;

    if (d > s) //d et s se chevauchent
    {
        while (n > 0)//copie de la fin vers le debut pour eviter d'ecraser les donnees sources
        {
            d[n - 1] = s[n - 1];//n-1 est le dernier element du tableau et n = taille du tab
            n--;
        }
    }
    else
    {
        while (i < n) //pas de chevauchement, copie normal
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
