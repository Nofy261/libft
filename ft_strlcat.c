#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return(i);
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  dstsize;
    size_t  srcsize;

    i = 0;
    if (!dest && !size)//si dest est null et que size vaut 0, on fait rien
        return (0);// ERREUR doit retourner(srcsize)
    dstsize = ft_strlen(dest);
    srcsize = ft_strlen(src);
    if (dstsize >= size)// il n y a plus de place pour copier src
        return (srcsize + size);
    if (!size)// si size = 0 la fonction ne fait rien
        return (srcsize);// ERREUR retourne srcsize + dstsize 
    while (src[i] != '\0' && dstsize + i < size - 1)//s il y a encore de la place dans dest pour recevoir la copie
    {
        dest[dstsize + i] = src[i];//on copie src a la suite du dernier caractere de dest
        i++;
    }
    dest[dstsize + i] = '\0';
    return (srcsize + dstsize);//somme des deux avant la concatenation
}

#include <stdio.h>

int main(void)
{
    char dest[20] = "Bonjour les";//ici dest a tels octets . !!important de preciser la taille
    size_t size;
    char *src = "les amis";
    size_t lentotal;

    size = 0;// taille max utilisable de dest = nombre ecrit
    printf("src avant = %s\n", src);
    printf("dest avant  = %s\n", dest);
    lentotal = ft_strlcat(dest, src, size);
    printf("dest apres = %s\n", dest);
    printf("taille total = %zu\n", lentotal);
}
//test avec size = 0 a faire car ne donne pas le resultat attendu