void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if ((!s) || (!f)) 
        return ;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

void    f(unsigned int i, char *ptr)
{
    if (i == 3)
        *ptr = 'Z'; //transforme en U le caractere qui se trouve a l index 3.
}

#include <stdio.h>

int main(void)
{
    char tab[] = "Bonjour"; //resultat BonZour
    
    ft_striteri(tab, f);
    printf("%s\n", tab);
}