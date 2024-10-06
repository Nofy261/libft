#include <stdlib.h>
//#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	stotal;

	if (nmemb == 0 && size == 0)
		return (NULL);
	stotal = nmemb * size;
	ptr = malloc(stotal);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', stotal);
	return (ptr);
}

#include <stdio.h>

int main(void)
{
    void    *ptr;
    ptr = ft_calloc(8, 1);
    printf("%p\n", ptr);
    free(ptr);
}
