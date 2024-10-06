#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write (fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write (fd, "-", 1);
        n = n *- 1;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + '0' , fd);
}

int main(void)
{

    ft_putnbr_fd(-6578, 1);

}
