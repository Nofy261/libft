#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

int main(void)
{
    ft_putchar_fd('D', 1);// ecrit D sur la sortie standard (ecran) 
}