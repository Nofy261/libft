#include <unistd.h>

void    ft_putstr_fd(char   *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write (fd, &s[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr_fd("Bonjour la terre", 1);// fd = 1 affiche a l ecran
}